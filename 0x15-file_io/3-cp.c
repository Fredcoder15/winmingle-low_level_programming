
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

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
    int close_result;
    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO,
            "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO,
            "Error: Can't write to %s\n", argv[2]);
        close(fd_from);
        exit(99);
    }

    while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);

        if (bytes_written != bytes_read)
        {
            dprintf(STDERR_FILENO,
                "Error: Can't write to %s\n", argv[2]);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO,
            "Error: Can't read from file %s\n", argv[1]);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    close_result = close(fd_from);
    if (close_result == -1)
    {
        dprintf(STDERR_FILENO,
            "Error: Can't close fd %d\n", fd_from);
        close(fd_to);
        exit(100);
    }

    close_result = close(fd_to);
    if (close_result == -1)
    {
        dprintf(STDERR_FILENO,
            "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}
