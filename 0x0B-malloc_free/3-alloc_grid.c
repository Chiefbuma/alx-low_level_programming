#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - loop
 * @width: w
 * @height: h
 * Return: pointer , array
 */

int **alloc_grid(int width, int height)
{
int **twi;
int w, u;

if (width <= 0 || height <= 0)
return (NULL);

twi = malloc(sizeof(int *) * height);

if (twi == NULL)
return (NULL);

for (w = 0; w < height; w++)
{
twi[w] = malloc(sizeof(int) * width);

if (twi[w] == NULL)
{
for (; w >= 0; w--)
free(twi[w]);

free(twi);
return (NULL);
}
}

for (w = 0; w < height; w++)
{
for (u = 0; u < width; u++)
twi[w][u] = 0;
}

return (twi);
}
