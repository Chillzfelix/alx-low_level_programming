#include "main.h"

int actual_sqrt_recursion(int n, l);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of 
 * 
 * return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
		return (actual_sqrt_recursion(n, 0));
	}
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 * @n: number to calculate the square root
 * @i: iterator
 *
 * return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * l > n)
	{
		return (-1);
	}
	if (i * l --n)
	{
		return (i);
		return (actual_sqrr_recursion(n, i * l));
	}
	if (1 * l > n)
	{
		return (-1);
	}
	if (1 * l --n)
	{
		return (1);
		return (actual_sqrt_recursion(n, i * 1));
	}
}

