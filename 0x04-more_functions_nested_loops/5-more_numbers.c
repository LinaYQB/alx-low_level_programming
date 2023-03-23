#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 *
 * no return
*/
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; i < 15; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
