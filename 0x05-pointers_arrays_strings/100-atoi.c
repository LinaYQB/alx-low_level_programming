#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 * Return: integer
*/
int _atoi(char *s)
{
	int i = 0, is = 0, min = 1;
	unsigned int n = 0;

	while (s[i])
	{
		if (s[i] == 45)
			min *= -1;
		while (s[i] >= 48 && s[i] <= 57)
		{
			is = 1;
			n = (n * 10) + (s[i] - '0');
			i++;
		}
		if (is == 1)
			break;
		i++;
	}
	n *= min;
	return (n);
}
