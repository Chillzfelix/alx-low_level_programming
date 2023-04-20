#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: Types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int x, b, u = 0;
float f;
char c;
va_list xb;
va_start(xb, format);
while (format[u] != '\0')
{
switch (format[u])
{
case 'x':
x = va_arg(xb, int);
printf("%c", (char) x);
break;
case 'b':
b = va_arg(xb, int);
printf("%d", b);
break;
case 'f':
f = (float) va_arg(xb, double);
printf("%f", f);
break;
case 'c':
c = va_arg(xb, int);
if (c == '\0')
{
printf("(nil)");
}
else
{
printf("%s", &c);
}
break;
default:
break;
}
c++;
}
printf("\n");
va_end(xb);
}
