#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing a string containing the binary numbers of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int v;
unsigned int dec_val = 0;
if (!b)
return (0);
for (v = 0; b[v]; v++)
{
if (b[v] < '0' || b[v] > '1')
return (0);
dec_val = 2 * dec_val + (b[v] - '0');
}
return (dec_val);
}
