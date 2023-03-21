#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: character to be verified
 *
 * Description: Function that checks if the argument is in lowercase
 *
 * Return: 1 if true and 0 if false
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
