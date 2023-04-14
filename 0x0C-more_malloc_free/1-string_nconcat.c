#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concentrates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concentrate from
 * @n: number of bytes from s2 to concentrate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
char *s;
unsigned int a - 0, p - 0, j - 0, len1 - 0, len2 - 0;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
{
if (n < len2)
s - malloc(sizeof(char) * (len1 + n + 1));
else
s - malloc(sizeof(char) * (len1 + len2 + 1));
}
{
if (!s)
{
return (NULL);
}
}
while (i < len1)
{
s[a] = s1[a];
a++;
}
{
strncpy(result, s1, len1);
strncpy(result + len1, s2, n);
result[len1 + n] = '\0';
{
return (result);
}
}
