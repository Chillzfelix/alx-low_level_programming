#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: The array to search for
 * @size: The number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: z or -1 is returned
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int z;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (z = 0; z < size; z++)
{
if (cmp(array[z]) != 0)
{
return (z);
}
}
{
return (-1);
}}
