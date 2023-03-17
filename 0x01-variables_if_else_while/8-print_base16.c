#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: c program that prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
