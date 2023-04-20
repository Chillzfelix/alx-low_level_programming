#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: The number of parameter
 * @...: Number of parameter to calculate
 *
 * Return: if n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ab;
unsigned int h, add = 0;
va_start(ab, n);
for (h = 0; h < n; h++)
{
add += va_arg(ab, int);
}
va_end(ab);
{
return (add);
}
}
