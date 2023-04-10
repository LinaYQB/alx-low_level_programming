#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to be verified
 *
 * Description: Funct that checks if the argument is an alphabetic character
 *
 * Return: 1 if true and 0 if false
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
