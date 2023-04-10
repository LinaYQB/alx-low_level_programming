#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Description: function that returns the length of a string
 * Return: 0 success
*/
int _strlen(char *s)
{
	int lg;
	char *p = s;

	while (*p != '\0')
		p++;
	lg = p - s;
	return (lg);
}
