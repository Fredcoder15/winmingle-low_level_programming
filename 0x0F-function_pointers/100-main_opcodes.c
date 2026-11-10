
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Prints the opcodes of its own main function.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 1 or 2 on error.
 */
int main(int argc, char **argv)
{
    int i;
    int bytes;
    unsigned char *ptr;

    /* Check that exactly one argument was supplied. */
    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    /* Convert the requested number of bytes from string to integer. */
    bytes = atoi(argv[1]);

    /* Reject negative byte counts. */
    if (bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    /* Get the address of the beginning of the main function. */
    ptr = (unsigned char *)main;

    /* Read and print each requested byte in hexadecimal format. */
    for (i = 0; i < bytes; i++)
    {
        printf("%02x", ptr[i]);

        /* Separate bytes with spaces, but not after the last byte. */
        if (i != bytes - 1)
        {
            printf(" ");
        }
    }

    /* Finish the output with a newline. */
    printf("\n");

    return (0);
}
