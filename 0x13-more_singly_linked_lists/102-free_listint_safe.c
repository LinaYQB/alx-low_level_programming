#include "lists.h"

/**
 * find_listint_loop1 - finds the loop in a linked list
 * @head: linked list to search in
 * Return: address of node where the loop starts
*/
listint_t *find_listint_loop1(listint_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a listint list
 * @h: head of list
 * Return: size of the list freed
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t i;
	int lp = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = find_listint_loop1(*h);
	for (i = 0; (*h != loopnode || lp) && *h != NULL; *h = next)
	{
		i++;
		next = (*h)->next;
		if (*h == loopnode && lp)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			i++;
			next = next->next;
			free((*h)->next);
			lp = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (i);
}
