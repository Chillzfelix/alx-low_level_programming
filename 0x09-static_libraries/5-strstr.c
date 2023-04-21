#include "main.h"
/**
 * _strstr - program entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *g = haystack;
char *h = needle;
while (*g == *h && *h != '\0')
{
g++;
h++;
}
if (*g == '\0')
return (haystack);
{
return (0);
}
