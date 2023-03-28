#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * @a: the array to print
 * @n: the number of element to print
 * no return - void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
