#include "lists.h"

/**
 * pop_listint - deletes the head of a listint_t linked list
 *               and returns the head nodes data n
 * @head: address of pointer of the 1st node
 * Return: value of the head node
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int x;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = node;
	return (x);
}
