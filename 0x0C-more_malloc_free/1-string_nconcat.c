#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates
 * @s1: string
 * @s2: string
 * @n: bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *c;
unsigned int k = 0, l = 0, len4 = 0, len5 = 0;

while (s1 && s1[len4])
len4++;
while (s2 && s2[len5])
len5++;

if (n < len5)
c = malloc(sizeof(char) * (len4 + n + 1));
else
c = malloc(sizeof(char) * (len4 + len5 + 1));

if (!c)
return (NULL);

while (k < len4)
{
c[k] = s1[k];
k++;
}

while (n < len5 && k < (len4 + n))
c[k++] = s2[l++];

while (n >= len5 && k < (len4 + len5))
c[k++] = s2[l++];

c[k] = '\0';

return (c);
}

