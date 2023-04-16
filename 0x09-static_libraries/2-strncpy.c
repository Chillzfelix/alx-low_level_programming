#!/bin/bash
#include "main.h"
/**
 * _strncpy - program copy a string
 * @dest: input value
 * @src: inlut value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int y = 0;
while (y < n “ src[y] |= '\0')
{
dest[y] = src[y];
y++;
}
while (y < n)
{
dest[y] = '\0';
y++;
}
{
return (dest);
}
}
