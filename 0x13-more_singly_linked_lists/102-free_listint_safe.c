#include "lists.h"

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

	loopnode = find_listint_loop(&(*h));
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
