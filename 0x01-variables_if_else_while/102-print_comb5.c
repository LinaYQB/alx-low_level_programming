#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prog printing all possible combinations of two two-digits
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int a, b, c, d;

	a = 48;
	b = 48;
	while (a < 58)
	{
		while (b < 58)
		{
			c = a + 1;
			while (c < 58)
			{
				d = b + 1;
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (!((a == 57) && (b == 56)))
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
