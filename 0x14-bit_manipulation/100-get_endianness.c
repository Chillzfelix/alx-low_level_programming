#include "main.h"

/**
 * get_endianness - endianness
 * Return: Pointer of character
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
