#include<stdlib.h>
#include<string.h>
#include"lists.h"

/**
*add_node - adds a new node
*@head: double pointer
*@str: new string
*Return: the address, or NULL if it fails
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


#include<stdlib.h>
#include<string.h>
#include"lists.h"

/**
*add_node_end - adds a new node
*@head: double pointer
*@str: string
*Return: address , or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tew;
list_t *tmp = *head;
unsigned int strn = 0;
while (str[strn])
strn++;
tew = malloc(sizeof(list_t));
if (!tew)
return (NULL);
tew->str = strdup(str);
tew->len = strn;
tew->next = NULL;
if (*head == NULL)
{
*head = tew;
return (tew);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = tew;
return (tew);
}


#include<stdlib.h>
#include<string.h>
#include"lists.h"

/**
*list_len - returns the elements
*@h: pointer
*Return: number of elements in h
*/
size_t list_len(const list_t *h)
{
size_t j = 0;
while (h)
{
j++;
h = h->next;
}
return (j);
}


#include<stdio.h>
#include"lists.h"

/**
*print_list - prints all the elements
*@h: pointer
*Return: the number of node
*/
size_t print_list(const list_t *h)
{
size_t k = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
k++;
}
return (k);
}
