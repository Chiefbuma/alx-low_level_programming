#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int k;
unsigned int uns_num = 0;

if (!b)
return (0);

for (k = 0; b[k]; k++)
{
if (b[k] < '0' || b[k] > '1')
return (0);
uns_num = 2 * uns_num + (b[k] - '0');
}

return (uns_num);
}

