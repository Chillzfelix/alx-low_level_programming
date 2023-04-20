#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to the new dog, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;
int len_name, len_owner;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
for (name_len = 0; name[name_len]; name_len++)
;
for (owner_len = 0; owner[owner_len]; owner_len++)
;
new_name = malloc(name_len + 1);
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}
new_owner = malloc(len_owner + 1);
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}
for (int j = 0; j <= len_name; j++)
{
new_name[j] = name[j];
}
for (int j = 0; j <= len_owner; j++)
{
new_owner[j] = owner[j];
}
new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;
{
return (new_dog);
}
