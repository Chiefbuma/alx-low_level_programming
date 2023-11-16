#include<stdlib.h>
#include"lists.h"

/**
*list_len - returns the  linked list
*@h: pointer
*
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
