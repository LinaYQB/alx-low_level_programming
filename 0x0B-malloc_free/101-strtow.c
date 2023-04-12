#include "main.h"

/**
 * conteur - counts the number of words in a string
 * @s: string
 * Return: int (number of words)
*/
int conteur(char *s)
{
	int i, num = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				num++;
		}
		else if (i == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to char (array of strings)
*/
char **strtow(char *str)
{
	int i, j, k, l, number_words = 0, wc = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	number_words = conteur(str);
	if (number_words == 1)
		return (NULL);
	words = (char **)malloc(number_words * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[number_words - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			words[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (words[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(words[k]);
				free(words[number_words - 1]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				words[wc][l] = str[i + l];
			words[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (words);
}
