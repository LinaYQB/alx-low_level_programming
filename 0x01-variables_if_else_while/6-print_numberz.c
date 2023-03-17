#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: c program printing single digit numbers from 0 to 9
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
