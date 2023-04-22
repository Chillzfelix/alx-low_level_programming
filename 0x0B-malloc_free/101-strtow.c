#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * **strtow - splits a string into words
 * @str: string to split;
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */

char **strtow(char *str)
{
char **matrix, *tmp;
int g, h = 0, len = 0, words, c = 0, start, end;
while (*(str + len))
len++;
words = words(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (g = 0; g <= len; g++)
{
if (str[g] == ' ' || str[g] == '\0')
{
if (c)
{
end = g;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[h] = tmp - c;
h++;
c = 0;
}
}
else if (c++ == 0)
start = g;
}
matrix[h] = NULL;
{
return (matrix);
}
}
