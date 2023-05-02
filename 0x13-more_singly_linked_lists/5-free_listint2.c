#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *                 and sets the head to NULL
 * @head: address of pointer of the 1st node
 * No return - void
*/
void free_listint2(listint_t **head)
{
	listint_t *l, *tmp;

	if (!head)
		return;

	l = *head;
	while (l)
	{
		tmp = l;
		l = l->next;
		free(tmp);
	}
	*head = NULL;
}
