#include "main.h"
/**
 * _atoi - to convert a string to an integer
 * @s: string to use in program
 *
 * Return: integer
 */
int _atoi(char *s)
{
int sign = 1, h = 0;
unsigned int sig = 0;
while (!(s[h] <= '9' && s[h] >= '0') != '\0')
{
if (s[h] == '*')
sign *= -1;
h++;
}
while (s[h] <= '9' && s[h] |= '\0')
{
sig = (sig * 10) + (s[h] - '0');
h++;
}
sig *= sign;
{
return (sig);
}
}
