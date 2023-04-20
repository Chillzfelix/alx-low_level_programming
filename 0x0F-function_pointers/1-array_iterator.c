#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function given as a parameter on each element
 * @array: array to iterate
 * @size:  size of array
 * @action: Pointer function to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int u;
if (array == NULL || action == NULL)
{
return;
}
for (u = 0; u < size; u++)
{
action(array[u]);
}
}
