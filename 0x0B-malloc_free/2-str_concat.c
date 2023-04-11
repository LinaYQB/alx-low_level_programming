#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to char
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, length, l1 = 0, l2 = 0;
	char *conc;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			l1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			l2++;
	}

	length = l1 + l2;
	conc = (char *)malloc(sizeof(char) * (length + 1));

	if (conc == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		conc[i] = s1[i];
	for (j = 0; j < l2; j++, i++)
		conc[i] = s2[j];
	conc[length] = '\0';

	return (conc);
}
