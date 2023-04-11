#include "main.h"

/**
 * *argstostr - concatenates all the arguments of our program
 * @ac: arguments count
 * @av: arguments vector
 * Return: pointer to char
*/
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			length++;
		length++;
	}

	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < length; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
