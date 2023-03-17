#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prog printing all possible diff combinations of three digits
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int k, i, j;

	k = 48;
	while (k < 56)
	{
		i = k + 1;
		while (i < 58)
		{
			j = i + 1;
			while (j < 58)
			{
				putchar(k);
				putchar(i);
				putchar(j);
				if (k != 55)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
