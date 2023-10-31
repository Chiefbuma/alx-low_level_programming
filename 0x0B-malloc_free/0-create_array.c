#include "main.h"
#include <stdlib.h>
/**
 * create_array -array
 * @size: size of array
 * @c: char
 * Return: NULL or pointer
 *
 **/
char *create_array(unsigned int size, char c)
{
char *stg;
unsigned int k;

stg = malloc(sizeof(char) * size);

if (size == 0 || stg == NULL)
return (NULL);

for (k = 0; k < size; k++)
stg[k] = c;

return (stg);
}

