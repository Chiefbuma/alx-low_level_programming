#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memory allocation
 * @b: bytes
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *klm;

klm = malloc(b);

if (klm == NULL)
exit(98);

return (klm);
}

