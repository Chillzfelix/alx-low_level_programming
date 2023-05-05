#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks if a motor is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int o = 1;
char *c = (char *) &o;
return (*c);
}
