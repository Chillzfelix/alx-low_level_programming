#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers
 * @...: The variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list me;
unsigned int ind;
va_start(me, n);
for (ind = 0; ind < n; ind++)
{
printf("%d", va_arg(me, int));
if (ind != (n - 1) && seperator != NULL)
{
printf("%s", seperator);
}
}
printf("\n");
{
return (ad);
}
}
