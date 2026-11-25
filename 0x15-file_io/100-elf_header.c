
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * write_string - writes a string to standard output
 * @str: string to display
 */
void write_string(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;

    write(STDOUT_FILENO, str, length);
}

/**
 * write_number - writes a number in decimal or hexadecimal
 * @number: number to display
 * @base: number base (10 or 16)
 * @width: minimum number of digits
 */
void write_number(unsigned long long number, unsigned int base, int width)
{
    char digits[] = "0123456789abcdef";
    char buffer[32];
    int count = 0;
    int i;

    do {
        buffer[count++] = digits[number % base];
        number /= base;
    } while (number > 0);

    while (count < width)
        buffer[count++] = '0';

    for (i = count - 1; i >= 0; i--)
        write(STDOUT_FILENO, &buffer[i], 1);
}

/**
 * main - displays information contained in an ELF header
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd;
    int i;
    unsigned char ident[EI_NIDENT];
    ssize_t bytes_read;
    Elf32_Ehdr header32;
    Elf64_Ehdr header64;
    unsigned int type;
    unsigned long long entry;

    if (argc != 2)
    {
        write(2, "Usage: elf_header elf_filename\n", 31);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        write_string("Error: Can't read file ");
        {
            int length = 0;

            while (argv[1][length] != '\0')
                length++;
            write(2, argv[1], length);
        }
        write(2, "\n", 1);
        exit(98);
    }

    bytes_read = read(fd, ident, EI_NIDENT);
    if (bytes_read != EI_NIDENT ||
        ident[EI_MAG0] != ELFMAG0 ||
        ident[EI_MAG1] != ELFMAG1 ||
        ident[EI_MAG2] != ELFMAG2 ||
        ident[EI_MAG3] != ELFMAG3)
    {
        write_string("Error: Not a valid ELF file\n");
        close(fd);
        exit(98);
    }

    if ((ident[EI_CLASS] != ELFCLASS32 &&
         ident[EI_CLASS] != ELFCLASS64) ||
        (ident[EI_DATA] != ELFDATA2LSB &&
         ident[EI_DATA] != ELFDATA2MSB) ||
        ident[EI_VERSION] != EV_CURRENT)
    {
        write_string("Error: Invalid ELF header\n");
        close(fd);
        exit(98);
    }

    if (lseek(fd, 0, SEEK_SET) == -1)
    {
        write_string("Error: Can't seek file\n");
        close(fd);
        exit(98);
    }

    if (ident[EI_CLASS] == ELFCLASS32)
    {
        bytes_read = read(fd, &header32, sizeof(header32));
        if (bytes_read != sizeof(header32))
        {
            write_string("Error: Can't read ELF header\n");
            close(fd);
            exit(98);
        }

        type = header32.e_type;
        entry = header32.e_entry;
    }
    else
    {
        bytes_read = read(fd, &header64, sizeof(header64));
        if (bytes_read != sizeof(header64))
        {
            write_string("Error: Can't read ELF header\n");
            close(fd);
            exit(98);
        }

        type = header64.e_type;
        entry = header64.e_entry;
    }

    write_string("ELF Header:\n");
    write_string("  Magic:   ");

    for (i = 0; i < EI_NIDENT; i++)
    {
        write_number(ident[i], 16, 2);
        write_string(" ");
    }
    write_string("\n");

    write_string("  Class:                             ");
    if (ident[EI_CLASS] == ELFCLASS32)
        write_string("ELF32\n");
    else
        write_string("ELF64\n");

    write_string("  Data:                              ");
    if (ident[EI_DATA] == ELFDATA2LSB)
        write_string("2's complement, little endian\n");
    else
        write_string("2's complement, big endian\n");

    write_string("  Version:                           ");
    write_number(ident[EI_VERSION], 10, 0);
    write_string(" (current)\n");

    write_string("  OS/ABI:                            ");

    switch (ident[EI_OSABI])
    {
        case ELFOSABI_NONE:
            write_string("UNIX - System V");
            break;
        case ELFOSABI_HPUX:
            write_string("UNIX - HP-UX");
            break;
        case ELFOSABI_NETBSD:
            write_string("UNIX - NetBSD");
            break;
        case ELFOSABI_LINUX:
            write_string("UNIX - GNU");
            break;
        case ELFOSABI_SOLARIS:
            write_string("UNIX - Solaris");
            break;
        case ELFOSABI_AIX:
            write_string("UNIX - AIX");
            break;
        case ELFOSABI_IRIX:
            write_string("UNIX - IRIX");
            break;
        case ELFOSABI_FREEBSD:
            write_string("UNIX - FreeBSD");
            break;
        case ELFOSABI_OPENBSD:
            write_string("UNIX - OpenBSD");
            break;
        default:
            write_string("<unknown>");
    }
    write_string("\n");

    write_string("  ABI Version:                       ");
    write_number(ident[EI_ABIVERSION], 10, 0);
    write_string("\n");

    write_string("  Type:                              ");

    switch (type)
    {
        case ET_NONE:
            write_string("NONE (None)");
            break;
        case ET_REL:
            write_string("REL (Relocatable file)");
            break;
        case ET_EXEC:
            write_string("EXEC (Executable file)");
            break;
        case ET_DYN:
            write_string("DYN (Shared object file)");
            break;
        case ET_CORE:
            write_string("CORE (Core file)");
            break;
        default:
            write_string("<unknown>");
    }
    write_string("\n");

    write_string("  Entry point address:               0x");
    write_number(entry, 16, 0);
    write_string("\n");

    if (close(fd) == -1)
    {
        write_string("Error: Can't close file\n");
        exit(98);
    }

    return (0);
}
