#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: function that prints alphabet in lowercase
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
