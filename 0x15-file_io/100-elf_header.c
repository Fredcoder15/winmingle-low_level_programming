
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_osabi - prints the operating system ABI
 * @osabi: OS/ABI identification number
 */
void print_osabi(unsigned char osabi)
{
    switch (osabi)
    {
        case ELFOSABI_NONE:
            printf("UNIX - System V");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - GNU");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD");
            break;
        default:
            printf("<unknown: %x>", osabi);
    }
}

/**
 * print_type - prints the ELF file type
 * @type: ELF file type number
 */
void print_type(unsigned int type)
{
    switch (type)
    {
        case ET_NONE:
            printf("NONE (None)");
            break;
        case ET_REL:
            printf("REL (Relocatable file)");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)");
            break;
        case ET_CORE:
            printf("CORE (Core file)");
            break;
        default:
            printf("<unknown>: %x", type);
    }
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
    unsigned long entry;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO,
            "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    bytes_read = read(fd, ident, EI_NIDENT);
    if (bytes_read != EI_NIDENT)
    {
        dprintf(STDERR_FILENO,
            "Error: Not a valid ELF file - %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if (ident[EI_MAG0] != ELFMAG0 ||
        ident[EI_MAG1] != ELFMAG1 ||
        ident[EI_MAG2] != ELFMAG2 ||
        ident[EI_MAG3] != ELFMAG3)
    {
        dprintf(STDERR_FILENO,
            "Error: Not a valid ELF file - %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if (ident[EI_CLASS] != ELFCLASS32 &&
        ident[EI_CLASS] != ELFCLASS64)
    {
        dprintf(STDERR_FILENO,
            "Error: Invalid ELF class - %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if (ident[EI_DATA] != ELFDATA2LSB &&
        ident[EI_DATA] != ELFDATA2MSB)
    {
        dprintf(STDERR_FILENO,
            "Error: Invalid ELF data encoding - %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if (ident[EI_VERSION] != EV_CURRENT)
    {
        dprintf(STDERR_FILENO,
            "Error: Invalid ELF version - %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if (lseek(fd, 0, SEEK_SET) == -1)
    {
        dprintf(STDERR_FILENO,
            "Error: Can't seek file %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if (ident[EI_CLASS] == ELFCLASS32)
    {
        bytes_read = read(fd, &header32, sizeof(header32));
        if (bytes_read != (ssize_t)sizeof(header32))
        {
            dprintf(STDERR_FILENO,
                "Error: Can't read ELF header from %s\n", argv[1]);
            close(fd);
            exit(98);
        }

        type = header32.e_type;
        entry = header32.e_entry;
    }
    else
    {
        bytes_read = read(fd, &header64, sizeof(header64));
        if (bytes_read != (ssize_t)sizeof(header64))
        {
            dprintf(STDERR_FILENO,
                "Error: Can't read ELF header from %s\n", argv[1]);
            close(fd);
            exit(98);
        }

        type = header64.e_type;
        entry = header64.e_entry;
    }

    printf("ELF Header:\n");

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", ident[i]);
    printf("\n");

    printf("  Class:                             ");
    if (ident[EI_CLASS] == ELFCLASS32)
        printf("ELF32\n");
    else
        printf("ELF64\n");

    printf("  Data:                              ");
    if (ident[EI_DATA] == ELFDATA2LSB)
        printf("2's complement, little endian\n");
    else
        printf("2's complement, big endian\n");

    printf("  Version:                           %d", ident[EI_VERSION]);
    if (ident[EI_VERSION] == EV_CURRENT)
        printf(" (current)");
    printf("\n");

    printf("  OS/ABI:                            ");
    print_osabi(ident[EI_OSABI]);
    printf("\n");

    printf("  ABI Version:                       %d\n", ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    print_type(type);
    printf("\n");

    printf("  Entry point address:               0x%lx\n", entry);

    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO,
            "Error: Can't close file %s\n", argv[1]);
        exit(98);
    }

    return (0);
}
