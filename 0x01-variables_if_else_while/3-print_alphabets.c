#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: c program that prints alphabet in lowercase and uppercase
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
