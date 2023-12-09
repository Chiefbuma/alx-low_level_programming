#include "main.h"

/**
 * get_endianness - checker
 * Return: 0 or 1
 */
int get_endianness(void)
{
unsigned int k = 1;
char *r = (char *) &k;

return (*r);
}

