#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: Types of arguments passed to the function
 * Description: This prints anything of any type
 */
void print_all(const char * const format, ...)
{
int g = 0;
char *ptr, *sep = "";
va_list us;
va_start(us, format);
if (format)
{
while (format[g])
{
switch (format[g])
{
case 'c':
printf("%s%c", sep, va_arg(us, int));
break;
case 'g':
printf("%s%g", sep, va_arg(us, int));
break;
case 'f':
printf("%s%f", sep, va_arg(us, double));
break;
case 's':
ptr = va_arg(us, char *);
if (!ptr)
{
ptr = "(nil)";
}
printf("%s%s", sep, ptr);
break;
default:
g++;
continue;
}
sep = ", ";
g++;
}
}
printf("\n");
}
