#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * write_error - writes a string to standard error
 * @str: string to display
 */
void write_error(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;

    write(STDERR_FILENO, str, length);
}

/**
 * write_number - writes a positive integer to standard error
 * @number: number to display
 */
static void write_number(unsigned int number)
{
    char digit;

    if (number / 10)
        write_number(number / 10);

    digit = '0' + (number % 10);
    write(STDERR_FILENO, &digit, 1);
}

/**
 * main - copies the contents of one file to another
 * @argc: number of command-line arguments
 * @argv: array containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    if (argc != 3)
    {
        write_error("Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        write_error("Error: Can't read from file ");
        write_error(argv[1]);
        write_error("\n");
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        write_error("Error: Can't write to ");
        write_error(argv[2]);
        write_error("\n");
        close(fd_from);
        exit(99);
    }

    while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);

        if (bytes_written != bytes_read)
        {
            write_error("Error: Can't write to ");
            write_error(argv[2]);
            write_error("\n");
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        write_error("Error: Can't read from file ");
        write_error(argv[1]);
        write_error("\n");
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    if (close(fd_from) == -1)
    {
        write_error("Error: Can't close fd ");
        write_number((unsigned int)fd_from);
        write_error("\n");
        close(fd_to);
        exit(100);
    }

    if (close(fd_to) == -1)
    {
        write_error("Error: Can't close fd ");
        write_number((unsigned int)fd_to);
        write_error("\n");
        exit(100);
    }

    return (0);
}
