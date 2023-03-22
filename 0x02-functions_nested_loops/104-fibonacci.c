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
	int x, y, z, count;

	x = 1;
	y = 2;
	count  = 3;

	printf("%d, %d, ", x, y);
	while (count <= 98)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%d", z);
		if (count != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
