#include "variadic_functions.h"

/**
 * sum_them_all - sums of all functions parameters
 * @n: number of parameters passed
 * Return: int (sum of all parameters)
*/
int sum_them_all(const unsigned int n, ...)
{
	int s;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		s += va_arg(ap, int);
	va_end(ap);

	return (s);
}