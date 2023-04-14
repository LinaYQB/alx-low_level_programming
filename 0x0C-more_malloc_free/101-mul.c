#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - digit from 0 to 9
 * @c: character to check
 * Return: 1 if true and 0 if false
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Description: function that returns the length of a string
 * Return: 0 success
*/
int _strlen(char *s)
{
	int lg;
	char *p = s;

	while (*p != '\0')
		p++;
	lg = p - s;
	return (lg);
}

/**
 * large_mul - multiplies two big numbers in string format
 * @s1: first number
 * @s2: second number
 * Return: product
*/
char *large_mul(char *s1, char *s2)
{
	char *t;
	int lg1, lg2, a, b, c, x;

	lg1 = _strlen(s1);
	lg2 = _strlen(s2);
	t = malloc(a = x = lg1 + lg2);
	if (!t)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (lg1--; lg1 >= 0; lg1--)
	{
		if (!_isdigit(s1[lg1]))
		{
			free(t);
			printf("Error\n"), exit(98);
		}
		a = s1[lg1] - '0';
		c = 0;

		for (lg2 = _strlen(s2) - 1; lg2 >= 0; lg2--)
		{
			if (!_isdigit(s2[lg2]))
			{
				free(t);
				printf("Error\n"), exit(98);
			}
			b = s2[lg2] - '0';

			c += t[lg1 + lg2 + 1] + (a * b);
			t[lg1 + lg2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			t[lg1 + lg2 + 1] += c;
	}
	return (t);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	char *p;
	int x, y, z;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	p = large_mul(argv[1], argv[2]);
	y = 0;
	z = 0;
	while (z < x)
	{
		if (p[z])
			y = 1;
		if (y)
			_putchar(p[z] + '0');
		z++;
	}
	if (!y)
		_putchar('0');
	_putchar('\n');
	free(p);
	return (0);
}
