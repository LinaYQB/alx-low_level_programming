#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int i;
	int tab[50];

	tab[0] = 1;
	tab[1] = 2;

	for (i = 2; i < 50; i++)
	{
		tab[i] = tab[i - 1] - tab[i - 2];
	}
	for (i = 0; i < 50; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n");
	return (0);
}
