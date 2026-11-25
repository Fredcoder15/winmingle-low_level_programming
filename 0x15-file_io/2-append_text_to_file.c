#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    int length = 0;
    ssize_t bytes_written;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[length] != '\0')
            length++;

        bytes_written = write(fd, text_content, length);
        if (bytes_written != length)
        {
            close(fd);
            return (-1);
        }
    }

    if (close(fd) == -1)
        return (-1);

    return (1);
}