#include<stdlib.h>
#include<string.h>
#include"lists.h"

/**
*add_node - adds a new node
*@head: double pointer
*@str: new string
*
*Return: the address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *kew;
unsigned int len = 0;

while (str[len])
len++;

kew = malloc(sizeof(list_t));
if (!kew)
return (NULL);

kew->str = strdup(str);
kew->len = len;
kew->next = (*head);
(*head) = kew;

return (*head);
}

