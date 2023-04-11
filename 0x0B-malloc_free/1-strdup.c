#include "main.h"

/**
 * *_strdup - allocate space to copy a string
 * @str: string
 * Return: pointer to char
*/
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	a = (char *)malloc((sizeof(char) * size) + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = str[i];
	a[size] = '\0';
	return (a);
}
