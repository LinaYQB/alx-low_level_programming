#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 * return - the length of a string
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
