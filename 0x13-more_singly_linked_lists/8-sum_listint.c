#include "lists.h"

/**
 * sum_listint - returns the sum of all data n of a listint_t
 * @head: pointer to the 1st node
 * Return: int (sum)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
