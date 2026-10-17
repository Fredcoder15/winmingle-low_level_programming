/**
*Author: Akpan-fred, Promise Friday
*Program: winmingle Community C Training
*Description: Writes a message to standard error and returns a non-zero status
*/

#include <unistd.h>
int main(void)
    {
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
    }
