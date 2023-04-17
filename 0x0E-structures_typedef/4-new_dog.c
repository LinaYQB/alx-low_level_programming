#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: age of dog
 * @owner: Name of the owner of dog
 * Return: pointer to new dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, lg_name, lg_owner;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	/*memory allocation for the structure*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	/*argument length counter*/
	for (lg_name = 0; name[lg_name]; lg_name++)
		;
	lg_name++;
	for (lg_owner = 0; owner[lg_owner]; lg_owner++)
		;
	lg_owner++;
	/*memory allocation for the parametres name and owner*/
	dog->name = malloc(lg_name * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(lg_owner * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	/*initialisation*/
	for (i = 0; i < lg_name; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (i = 0; i < lg_owner; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
