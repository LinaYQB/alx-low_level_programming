#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: the variable to be processed
 *
 * Description: func that prints and returns the value of the last digit
 *
 * Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int ld, x;

	ld = n % 10;
	x = 48 + ld;
	_putchar(x);
	return (ld);
}
