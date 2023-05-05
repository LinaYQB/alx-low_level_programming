#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointed to int ( number to work on)
 * @index: index of the bit we want to set
 * Return: 1 if it worked, -1 on error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
