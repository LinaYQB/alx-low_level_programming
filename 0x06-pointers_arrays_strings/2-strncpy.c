#include "main.h"

/**
 *_strncpy - copies a string
 * @src: The source
 * @dest: The destination
 * @n: The length used in srct
 * Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
