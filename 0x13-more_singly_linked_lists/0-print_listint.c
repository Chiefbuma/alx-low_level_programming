#include "lists.h"

/**
 * print_listint - prints  linked list
 * @h: linked list to print
 *
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
size_t lim = 0;

while (h)
{
printf("%d\n", h->n);
lim++;
h = h->next;
}

return (lim);
}
