#include "main.h"

/**
 * _islower - returns a value based on c
 * @c: character stored in c to check if its lowercase or not
 *
 *
 * Return: 1 if c is lowercase and 0 if c is otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
