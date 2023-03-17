#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: c program printing single digit numbers from 0 to 9
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
