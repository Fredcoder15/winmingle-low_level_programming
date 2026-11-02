/*
 * Author: Akpan-fred, Promise Friday
 * Program: Winmingle Community C Training
 * Description: Multiplies two numbers passed as command-line arguments.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    int result;
    /* If the arguements are less or more, error */
    if(argc != 3)
    {
    printf("%s\n", "Error");
    return(1);
    }
    result = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", result);
    return (0);
}
