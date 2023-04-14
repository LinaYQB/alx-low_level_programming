#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes from s2 to use
 * Return: char pointer (string resulted)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, lg1, lg2;

	/*NULL case*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*length of the strings*/
	for (lg1 = 0; s1[lg1] != '\0'; lg1++)
		;
	for (lg2 = 0; s2[lg2] != '\0'; lg2++)
		;
	/* memory allocation*/
	str = malloc(lg1 + n + 1);

	/* allocation verrification*/
	if (str == NULL)
		return (NULL);

	/*the copy*/
	if (n > lg2)
		n = lg2;
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
