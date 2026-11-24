
#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 1 if little-endian, 0 if big-endian
 */
int get_endianness(void)
{
    unsigned int n = 1;
    unsigned char *c = (unsigned char *)&n;

    return (*c);
}
