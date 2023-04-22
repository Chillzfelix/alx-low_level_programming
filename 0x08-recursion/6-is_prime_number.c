#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - tells if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
return (prime_number(n, n - 1));
}
}
