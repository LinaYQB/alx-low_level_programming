#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 * Description: func that prints every minute from 0 to 23:59
 *
 * no return
*/
void jack_bauer(void)
{
	char a, b, c, d;

	for (a = 48; a < 51; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 54; c++)
			{
				for (d = 48; d < 58; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
			if ((a == 50) && (b == 51))
				break;
		}
	}
}
