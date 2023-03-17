#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prog printing all possible different combinations of two digits
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int i, j;

	i = 48;
	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
