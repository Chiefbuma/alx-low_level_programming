#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer
 * @n: new node
 * Return: pointer or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *kew;

	kew = malloc(sizeof(listint_t));
	if (!kew)
		return (NULL);

	kew->n = n;
	kew->next = *head;
	*head = kew;

	return (kew);
}
