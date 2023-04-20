#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: The variable to print
 * @f: A function pointer that takes char as parameter
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
