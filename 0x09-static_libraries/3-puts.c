#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to be printed
 * no return - void
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
