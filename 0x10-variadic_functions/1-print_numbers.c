#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that print numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers
 * @...: The variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ud;
unsigned int ind;
va_start(ud, n);
for (ind = 0; ind < n; ind++)
{
printf("%d", va_arg(ud, int));
if (ind != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
