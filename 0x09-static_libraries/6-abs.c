#include "main.h"

/**
 * _abs - computes the absolute value of an int
 *
 * @n: number to get absolute of
 *
 * Description: func that computes the absolute value of an integer
 *
 * Return: n if positive and -n if negative
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
