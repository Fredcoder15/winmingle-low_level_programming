
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Prints the contents of an 8 by 8 chessboard.
 */
#include "main.h"

/**
 * print_chessboard - prints an 8 by 8 chessboard
 * @a: pointer to the first row of the chessboard
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
    int i;
    int j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]);
        }
        _putchar('\n');
    }

}

