
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Defines the calculator structure and function prototypes.
 */

#ifndef CALC_H
#define CALC_H

/**
 * struct op - stores an operator and its corresponding function
 * @op: the arithmetic operator
 * @f: pointer to the function that performs the operation
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Finds the function associated with an operator. */
int (*get_op_func(char *s))(int, int);

/* Performs addition. */
int op_add(int a, int b);

/* Performs subtraction. */
int op_sub(int a, int b);

/* Performs multiplication. */
int op_mul(int a, int b);

/* Performs division. */
int op_div(int a, int b);

/* Performs modulo division. */
int op_mod(int a, int b);

#endif /* CALC_H */
