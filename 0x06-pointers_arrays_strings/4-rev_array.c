#include "main.h"

/**
 * reverse_array - reverses an array
 * @a:array
 * @n:integer
 * no return - void
*/
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
	}
}
