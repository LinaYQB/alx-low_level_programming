#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of pointer of the 1st node
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 * Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	l = *head;
	while (l)
	{
		if (i == idx - 1)
		{
			new_node->next = l->next;
			l->next = new_node;
			return (new_node);
		}
		i++;
		l = l->next;
	}
	free(new_node);
	return (NULL);
}
