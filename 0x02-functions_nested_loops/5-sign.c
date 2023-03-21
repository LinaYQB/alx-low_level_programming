#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: number to check
 *
 * Description: func that prints the sign of a given number
 *
 * Return: 1 for pisitive 0 for egal to zero -1 for negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}
