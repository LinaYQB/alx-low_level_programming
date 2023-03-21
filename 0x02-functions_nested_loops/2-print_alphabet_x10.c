#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Description: function that prints alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	char c;

	for (int i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
