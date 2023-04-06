#include "main.h"

/**
 * _strlen_recursion - func that returns the length of a string
 * @s: string pointer
 * Return: int
*/
int _strlen_recursion(char *s)
{
	int lg = 0;

	if (*s > '\0')
		lg += _strlen_recursion(s + 1) + 1;
	return (lg);
}
