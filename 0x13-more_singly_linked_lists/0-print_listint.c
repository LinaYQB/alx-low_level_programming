#include "lists.h"

/**
 * print_listint - prints all the element of a lintint_t list
 * @h: 1st node
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
