#include <stdlib.h>
#include "main.h"

/**
 * _calloc - memory array
 * @nmemb: elements
 * @size:  bytes
 * Return:  NULL ,Otherwise - a pointer
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *lem;
char *chill;
unsigned int stax;

if (nmemb == 0 || size == 0)
return (NULL);

lem = malloc(size * nmemb);

if (lem == NULL)
return (NULL);

chill = lem;

for (stax = 0; stax < (size * nmemb); stax++)
chill[stax] = '\0';

return (lem);
}
