#include<stdlib.h>
#include<string.h>
#include"lists.h"

/**
*add_node_end - adds a new node
*@head: double pointer
*@str: string
*Return: address or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *knw;
list_t *tmp = *head;
int strln = 0;

while (str[strln])
strln++;

knw = malloc(sizeof(list_t));
if (!knw)
return (NULL);

knw->str = strdup(str);
knw->len = strln;
knw->next = NULL;

if (*head == NULL)
{
*head = knw;
return (knw);
}

while (tmp->next)
tmp = tmp->next;

tmp->next = knw;

return (knw);
}
