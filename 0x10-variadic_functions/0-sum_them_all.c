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
va_list me;
unsigned int a, add = 0;
va_start(me, n);
for (a = 0; a < n; a++)
{
add += va_arg(me, int);
}
va_end(me);
{
return (add);
}}
