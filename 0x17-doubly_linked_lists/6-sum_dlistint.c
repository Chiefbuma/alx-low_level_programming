#include "lists.h"

/**
 * sum_dlistint - returns  (n).
 * @head: pointer.
 * Return: sum, 0.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
