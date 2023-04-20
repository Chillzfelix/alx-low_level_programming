#include <stdio.h>
#include <stddef.h>
#include "dog.h"
#include "main.h"

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
