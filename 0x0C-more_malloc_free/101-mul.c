
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Multiplies two positive numbers of any practical length.
 */

#include "main.h"
#include <stdlib.h>

/**
 * is_digit - Checks whether a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if every character is a digit, otherwise 0
 */
static int is_digit(char *str)
{
    int i;

    /* An empty string is not a valid positive number. */
    if (str[0] == '\0')
    {
    return (0);
    }

    /* Check every character in the string. */
    for(i = 0; str[i] != '\0'; i++)
    {
    if(str[i] < '0' || str[i] > '9')
      {
      return(0);
      }
    }
    return(1);
}

/**
 * get_length - Counts the characters in a string
 * @str: The string to measure
 *
 * Return: The number of characters
 */
static int get_length(char *str)
{
    int length = 0;

    /* Count characters until the null terminator. */
    while (str[length] != '\0')
    {
    length++;
    }
    return (length);
}

/**
 * print_error - Prints an error message and exits
 *
 * Return: This function does not return
 */
static void print_error(void)
{
    /* Print Error without using printf. */
    _putchar('E');
    _putchar('r');
    _putchar('r');
    _putchar('o');
    _putchar('r');
    _putchar('\n');

    exit(98);
}

/**
 * main - Multiplies two positive numbers
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    char *num1, *num2;
    int len1, len2, total_len;
    int i, j, digit1, digit2;
    int position1, position2, sum;
    int started;
    int *result;

    /* Require exactly two numbers after the program name. */
    if(argc != 3)
    {
    print_error();
    }

    /* Reject arguments containing anything other than digits. */
    if(!is_digit(argv[1]) || !is_digit(argv[2]))
    {
    print_error();
    }

    num1 = argv[1];
    num2 = argv[2];

    /* Find the lengths of both numbers. */
    len1 = get_length(num1);
    len2 = get_length(num2);
    total_len = len1 + len2;

    /* Allocate one result position for each possible digit. */
    result = malloc(sizeof(int) * total_len);

    if(result == NULL)
    {
    exit(98);
    }

    /* Initialize every result position to zero. */
    for(i = 0; i < total_len; i++)
    {
    result[i] = 0;
    }

    /*
     * Multiply each digit of the first number by each digit
     * of the second number, starting from the right.
     */
    for(i = len1 - 1; i >= 0; i--)
    {
    digit1 = num1[i] - '0';
    for(j = len2 - 1; j >= 0; j--)
      {
      digit2 = num2[j] - '0';
        /* Identify the positions for the product and carry. */
        
      position1 = i + j;
      position2 = i + j + 1;

         /* Add the multiplication result to the existing digit. */
      sum = digit1 * digit2 + result[position2];

            /* Store the current digit and carry the remainder. */
      result[position2] = sum % 10;
      result[position1] += sum / 10;
      }
    }

    /* Skip leading zeroes when printing the result. */
    started = 0;

    for(i = 0; i < total_len; i++)
    {
     if(result[i] != 0)
     {
     started = 1;
     }
     if(started)
     {
     _putchar(result[i] + '0');
     }
    }

    /* Print zero if every result position is zero. */
    if(!started)
    {
    _putchar('0');
    }
    _putchar('\n');

    /* Release the memory used for the result digits. */
    free(result);
    return (0);
}
