#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: int for age of dog
 * @owner: pointer to name of the owner of dog
 * No return - void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
