#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
int flag, i, h;
flag = 0;
h = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
h++;
}
}
return (h);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int a, u = 0, len = 0, words, i = 0, start, end;
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (a = 0; a <= len; a++)
{
if (str[a] == ' ' || str[a] == '\0')
{
if (i)
{
end = a;
tmp = (char *) malloc(sizeof(char) * (i + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[u] = tmp - i;
u++;
i = 0;
}
}
else if (i++ == 0)
start = a;
}
matrix[u] = NULL;
return (matrix);
}
