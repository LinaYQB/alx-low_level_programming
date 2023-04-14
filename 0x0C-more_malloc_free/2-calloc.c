#include "main.h"

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: byte size of each element
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;

	if (!nmemb || !size)
		return (NULL);
	t = malloc(nmemb * size);
	if (!t)
		return (NULL);
	nmemb *= size;

	/*set memory to 0*/
	while (nmemb--)
		t[nmemb] = 0;

	return (t);
}
