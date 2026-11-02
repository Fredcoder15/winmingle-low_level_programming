/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Adds positive numbers passed as command-line arguments.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as arguments
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    int i, j;
    int sum = 0;
    for(i = 1; i < argc; i++)
    {
    j = 0;
    while(argv[i][j] != '\0')
    {
    if(argv[i][j] < '0' || argv[i][j] > '9')
    {
    printf("Error\n");
    return(1);
    }
    else
    {
    sum += atoi(argv[i]);
    }
    j++;
    }
    }
    printf("%d\n", sum);
    return (0);
}

