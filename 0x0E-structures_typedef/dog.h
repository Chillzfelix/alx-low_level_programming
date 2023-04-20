#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* struct dog - new struct for dog
*
* @name: dog's name
*
* @age: dog's age
*
* @owner: dog's owner
**/
struct dog
{
pchar *name;
float age;
char *owner;
};

#endif
