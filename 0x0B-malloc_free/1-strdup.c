#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate
 * @str: character
 * Return: 0
 */

char *_strdup(char *str)
{
char *sss;
int k, j = 0;

if (str == NULL)
return (NULL);

k = 0;
while (str[k] != '\0')
k++;

sss = malloc(sizeof(char) * (k + 1));

if (sss == NULL)
return (NULL);

for (j = 0; str[j]; j++)
sss[j] = str[j];

return (sss);
}
