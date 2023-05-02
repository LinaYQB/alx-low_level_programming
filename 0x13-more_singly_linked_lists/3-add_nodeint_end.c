#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the 1st node
 * @n: new node value
 * Return: address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *noeud;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		noeud = *head;
		while (noeud->next)
			noeud = noeud->next;
		noeud->next = new_node;
	}
	return (new_node);
}
