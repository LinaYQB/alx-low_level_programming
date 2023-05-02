#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: pointer to the 1st node
 * @index: index of the node (starting at 0)
 * Return: pointer to the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}
