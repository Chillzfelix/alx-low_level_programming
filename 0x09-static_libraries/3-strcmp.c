#include "main.h"
/**
 * _strcmp - program compare string value
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[d] - s2[d]
 */
int _strcmp(char *s1, char *s2)
{
int s = 0;
while (s1[s] != '\0' && s2[s] != '\0')
{
if (s1[s] != s2[s])
{
return (s1[s] - s2[s]);
}
s++;
}
{
return (0);
}
}
