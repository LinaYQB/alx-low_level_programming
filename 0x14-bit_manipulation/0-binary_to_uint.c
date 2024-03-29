#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: int (converted number)
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int numero = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		numero = numero * 2 + (*b++ - '0');
	}
	return (numero);
}
