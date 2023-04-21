#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects a function to perform operation
 * @s: Sign of operation
 *
 * Return: The solution to the user
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
int g = 0;
while (ops[g].op != NULL)
{
if (*(ops[g].op) == *s && *(s + 1) != '\0')
{
return (ops[g].f);
}
g++;
}
return (NULL);
}
