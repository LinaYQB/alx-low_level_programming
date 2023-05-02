#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the 1st node
 * No return - void
*/
void free_listint(listint_t *head)
{
	listint_t *l;

	while (head)
	{
		l = head;
		head = head->next;
		free(l);
	}
}
