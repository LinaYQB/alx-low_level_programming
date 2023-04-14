#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min int (starting point)
 * @max: max int (end point)
 * Return: pointer to an array of integers
*/
int *array_range(int min, int max)
{
	int length, i, *p;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	/* memory allocation*/
	p = malloc(sizeof(int) * length);
	if (!p)
		return (NULL);

	for (i = 0; i < length; i++)
		p[i] = min++;

	return (p);
}
