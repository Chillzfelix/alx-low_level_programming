#include "main.h"
/**
 * _memcpy - a function that copies memory storage
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with a byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int w = 0;
int u = n;
{
for (; w < u; w++)
{
dest[w] = src[w];
n--;
}
}
{
return (dest);
}
}
