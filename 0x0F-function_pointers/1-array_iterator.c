#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter on each element
 * @array: array to iterate
 * @size:  size of arrayy
 * @action: Pointer function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int u;
for (u = 0; u < size; u++)
{
action(array[u]);
}
}
