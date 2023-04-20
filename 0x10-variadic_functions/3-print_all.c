#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: Types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int v, m, c = 0;
float d;
char p;
va_list vm;
va_start(vm, format);
while (format[c] != '\0')
{
switch (format[c])
{
case 'v':
v = va_arg(vm, int);
printf("%c", (char) v);
break;
case 'm':
m = va_arg(vm, int);
printf("%d", m);
break;
case 'd':
d = (float) va_arg(vm, double);
printf("%f", d);
break;
case 'p':
p = va_arg(vm, int);
if (p == '\0')
{
printf("(nil)");
}
else
{
printf("%s", &p);
}
break;
default:
break;
}
c++;
}
printf("\n");
va_end(vm);
}
