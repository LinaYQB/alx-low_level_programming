#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: c program that prints alphabet in lowercase except q and e
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
