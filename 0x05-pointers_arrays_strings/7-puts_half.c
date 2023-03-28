#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 * no return -void
*/
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		for (i = n + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = i / 2;
		for (i = n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
}
