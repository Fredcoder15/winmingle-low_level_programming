/*
 * Author: Fred
 * Program: 1-args.c
 * Description: Prints the number of arguments passed to the program.
 */

#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    (void)argv;
    printf("%d\n", argc - 1);
    return(0);
}
