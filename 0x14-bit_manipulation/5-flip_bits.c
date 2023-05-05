#include "main.h"

/**
 * flip_bits - returns numb of bits we need to flip to get from n to m
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int counteur = 0;

	while (x)
	{
		if (x & 1ul)
			counteur++;
		x = x >> 1;
	}
	return (counteur);
}
