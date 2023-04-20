#include "function_pointers.h"

/**
 * print_name - name to print
 * @name: The variable to be printed
 * @f: A function pointer char as the parameter
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
