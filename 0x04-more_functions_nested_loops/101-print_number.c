#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the number to print
 *
 * no return (void)
*/
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = (-1) * n;
		_putchar(45);
	}
	else
		i = n;
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
