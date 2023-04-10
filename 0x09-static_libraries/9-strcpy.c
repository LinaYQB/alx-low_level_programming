#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @src: the string to copy
 * @dest: the string returned
 * Return: 0 success
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
