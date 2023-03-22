#include <stdio.h>

/**
 * print_to_98 - prints natural numbers
 *
 * @n: variable representing the starting point
 *
 * Description: func that prints all natural numbers from n to 98
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		printf("%d", i);
		if (i == 98)
			break;
		printf(", ");
	}
	printf("\n");
}
