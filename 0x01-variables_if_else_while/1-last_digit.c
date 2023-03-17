#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: c program printing the last digit of a random number
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d ", n);
	if (y > 5)
	{
		printf("is %d and is greater than 5\n", y);
	}
	else
	{
		if (y == 0)
		{
			printf("is %d and is 0\n", y);
		}
		else
		{
			printf("is %d and is less than 6 and not 0\n", y);
		}
	}
	return (0);
}
