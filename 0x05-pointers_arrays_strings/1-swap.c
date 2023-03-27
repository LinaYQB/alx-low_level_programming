#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first variable
 * @b: second variable
 * no return - void
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
