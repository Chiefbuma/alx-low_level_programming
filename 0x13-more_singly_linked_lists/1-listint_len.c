#include "lists.h"

/**
* listint_len - returns linked list
* @h: linked list of type
*
* Return: nodes
*/
size_t listint_len(const listint_t *h)
{
size_t knw = 0;

while (h)
{
knw++;
h = h->next;
}

return (knw);
}
