#include "main.h"
/**
 * _strncat - function that adds two strings
 * using at most a byte from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int z;
int j;
z = 0;
while (dest[z] != '\0')
{
z++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[z] = src[w];
z++;
w++;
}
dest[z] = '\0';
{
return (dest);
}
}
