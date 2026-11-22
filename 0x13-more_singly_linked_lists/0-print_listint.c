
#include "lists.h"

/**
 * print_unsigned - prints an unsigned integer
 * @n: number to print
 */
static void print_unsigned(unsigned int n)
{
    if (n / 10)
        print_unsigned(n / 10);

    _putchar((n % 10) + '0');
}

/**
 * print_number - prints an integer
 * @n: number to print
 */
static void print_number(int n)
{
    unsigned int num = n;

    if (n < 0)
    {
        _putchar('-');
        num = -num;
    }

    print_unsigned(num);
}

/**
 * print_listint - prints all elements of a list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        print_number(h->n);
        _putchar('\n');

        count++;
        h = h->next;
    }

    return (count);
}
