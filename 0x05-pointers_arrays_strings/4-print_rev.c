#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 * no return - void
*/
void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	while (p >= s)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}
