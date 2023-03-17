#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: c program generating random number and sorting it
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%u is zero\n", n);
	}
	else
	{
		if (n < 0)
		{
			printf("%u is negative\n", n);
		}
		else
		{
			printf("%u is positive\n", n);
		}
	}
	return (0);
}
