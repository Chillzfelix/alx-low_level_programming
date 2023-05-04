#include "main.h"
#include <stdio.h>
/**
 * flip_bits - solve the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int c, solve = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (c = 63; c >= 0; c--)
{
current = exclusive >> c;
if (current & 1)
solve++;
}
return (solve);
}
