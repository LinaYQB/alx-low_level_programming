#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *t = malloc(b);

	if (t == 0)
		exit(98);

	return (t);
}
