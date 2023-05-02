#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: address of pointer to the 1st node
 * Return: pointer to the 1st node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
