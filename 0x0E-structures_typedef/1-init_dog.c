#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initialize a variable dog
* @name: dog's name
* @d: pointer to struct dog
* @age: dog's age
* @owner: dog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
init_dog;
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
