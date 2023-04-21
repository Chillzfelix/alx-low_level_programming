#include "main.h"
/**
 * _strspn - program entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int s;
while (*s)
{
for (s = 0; accept[s]; s++)
{
if (*s == accept[s])
{
n++;
break;
}
else if (accept[s + 1] == '\0')
return (n);
}
s++;
}
{
return (n);
}
}
