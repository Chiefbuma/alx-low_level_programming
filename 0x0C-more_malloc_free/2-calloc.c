#include <stdlib.h>
#include "main.h"

/**
 * *array_range - array
 * @min: min
 * @max: max
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *jkl;
int x, big;

if (min > max)
return (NULL);

big = max - min + 1;

jkl = malloc(sizeof(int) * big);

if (jkl == NULL)
return (NULL);

for (x = 0; min <= max; x++)
jkl[x] = min++;

return (jkl);
}

