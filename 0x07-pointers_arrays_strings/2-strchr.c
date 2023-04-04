#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: the char to find
 * Return: char pointer
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	return (NULL);
}
