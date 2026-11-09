
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Selects an arithmetic function using an operator.
 */

#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the function for an operator
 * @s: the operator passed to the calculator
 *
 * Return: Pointer to the matching function, or NULL if not found.
 */
int (*get_op_func(char *s))(int, int)
{
    /* Store each operator beside its corresponding function. */
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    /* Reject a NULL operator before accessing its characters. */
    if (s == NULL)
    {
        return (NULL);
    }

    /* Search the operator table until a match or the end is reached. */
    i = 0;
    while (ops[i].op != NULL && ops[i].op[0] != s[0])
    {
        i++;
    }

    /* Return the matching function, or NULL at the end of the table. */
    return (ops[i].f);
}
