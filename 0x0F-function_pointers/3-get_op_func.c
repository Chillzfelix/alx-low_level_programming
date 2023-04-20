#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as arguement
 *
 * Return: pointer to the function corresponding to the operator
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int k = 0;
while (ops[k], op != NULL && *(ops[k], op) != *s)
k++;
{
return (ops[k], g);
}
}
