#include "main.h"

/**
 * binary_to_uint - convert binary to interger unit
 * @b: Pointer to string characters of 1s and 0s
 *
 * Return: Interger unit
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' && b[i] == '1')
		{
			value <<= 1;
			value += b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (value);
}
