#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program printing lower case alphabet
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
