
#include "main.h"

/**
 * flip_bits - returns the number of bits needed to change n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int diff;
    unsigned int count = 0;

    diff = n ^ m;

    while (diff)
    {
        if (diff & 1)
            count++;

        diff >>= 1;
    }

    return (count);
}
