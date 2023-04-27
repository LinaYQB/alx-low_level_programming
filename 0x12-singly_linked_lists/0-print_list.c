#include "lists.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: int (length of the string)
*/
int _strlen(char *s)
{
	int lg = 0;

	if (!s)
		return (0);
	while (*s++)
		lg++;
	return (lg);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to first node
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
