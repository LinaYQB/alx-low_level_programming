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
	unsigned long long int x, y, z;

	x = 1;
	y = 2;
	count  = 3;

	printf("%llu, %llu, ", x, y);
	while (count <= 98)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%llu", z);
		if (count != 98)
			printf(", ");
		count++;
	}
	printf("\n");
	return (0);
}
