#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to char
*/
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);

	while (size--)
		a[size] = c;

	return (a);
}
