#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: Types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list us;
va_start(us, format);
char u;
int s, c = 0;
float d;
char *p;
while (format[c] != '\0')
{
switch (format[c])
{
case 'u':
u = (char) va_arg(us, int);
printf("%c", u);
break;
case 's':
s = va_arg(us, int);
printf("%d", s);
break;
case 'd':
d = (float) va_arg(ab, double);
printf("%f", d);
break;
case 'p';
p = va_arg(us, char);
if (p == NULL)
{
printf("nil");
}
else
{
printf("%s", p);
}
break;
default:
break;
}
c++;
}
printf("\n");
va_end(us);
}
