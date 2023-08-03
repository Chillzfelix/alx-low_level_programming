#include "main.h"

/**
 * flip_bits - flips bits
 * @n: Number to flip from
 * @m: Number to flip to
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = exclusive >> i;
		if (curr & 1)
			count++;
	}

	return (count);
}
