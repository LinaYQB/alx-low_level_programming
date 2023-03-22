#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 98 fibonacci numbers
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int count;
	unsigned long int x, y, z;

	x = 1;
	y = 2;
	count  = 3;

	printf("%lu, %lu, ", x, y);
	while (count <= 98)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu", z);
		if (count != 98)
			printf(", ");
		count++;
	}
	printf("\n");
	return (0);
}
