#include <stdio.h>
#include "main.h"
/**
*Author: Akpan-fred, promise Friday
*Program: winmingle Community C Training
*Description: prints all numbers between n to 98
*/

		/** This is a helper function for the task since the marker does not allowed the standard printf from the standard library	**/
void print_number(int n)
    {
				/** This uses recursion **/
   /** if(n < 0)
    {
    _putchar('-');
    n = -n;
    }
    else
    {
    n = n;
    }

    if(n / 10 != 0)
    {
    print_number(n / 10);
    }
    _putchar((n % 10) + '0');**/

			     /** This uses highest divisor to print the same printing **/
    int divisor;
    int  num;
    int temp;
    
    divisor = 1;
    if(n < 0)
    {
    _putchar('-');
    num = -n;
    }
    else
    {
    num = n;
    }
			/* Get the highest factor or divisor in base 10	*/
    temp = num;
    while((temp / 10) != 0)
    {
    divisor *= 10;
    temp /= 10;
    }

    while(divisor != 0)
    {
    _putchar((num / divisor) + '0');
    num %= divisor;
    divisor /= 10;
    }
    }

void print_to_98 (int n)
    {

    if (n <= 98){
    while (n <= 98)
    {
    print_number(n);
    if (n != 98 )
    {
    _putchar(',');
    _putchar(' ');
	
    }
    n++;
    }

    }

    else
    {
    while (n >= 98)
    {
    print_number(n);
    if (n != 98 )
    {
    _putchar(',');
    _putchar(' ');
    }
    n--;
    }
    
    }
    _putchar('\n');
    }
