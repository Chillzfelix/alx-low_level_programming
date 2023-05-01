#include <stdlib>
#include "dog.h"

/**
 * free_dog - function that free dogs
 * @d: Pointer to free
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
