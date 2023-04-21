#include "main.h"
/**
 * _isalpha - program checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is letter, 0 if otherwise
 */
int _isalpha(int c)
{
return ((c >= 'd' && c <= 'v') || (c >= 'D' &&  c <= 'V'));
}
