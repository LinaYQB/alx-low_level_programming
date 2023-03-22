#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of the even-valued terms of fibonacci
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int x, y, z, sum;

	x = 1;
	y = 2;
	sum = 0;

	while (y <= 4000000)
	{
		if ((b % 2) == 0)
		{
			sum = sum + b;
		}
		z = x + y;
		x = y;
		y = z;
	}
	printf("%d\n", sum);
	return (0);
}
