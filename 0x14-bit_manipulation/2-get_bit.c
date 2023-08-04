#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: int number
 * @index: the index of the bit we want to get
 * Return: the value of that bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
