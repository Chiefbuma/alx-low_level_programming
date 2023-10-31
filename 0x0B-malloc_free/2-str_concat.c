#include "main.h"
#include <stdlib.h>

/**
 * str_concat - add   size
 * @s1: input
 * @s2: input
 * Return:  s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
char *strgconc;
int j, jk;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

j = jk = 0;
while (s1[j] != '\0')
j++;
while (s2[jk] != '\0')
jk++;

strgconc = malloc(sizeof(char) * (j + jk + 1));

if (strgconc == NULL)
return (NULL);

j = jk = 0;
while (s1[j] != '\0')
{
strgconc[j] = s1[j];
j++;
}

while (s2[jk] != '\0')
{
strgconc[j] = s2[jk];
j++, jk++;
}
strgconc[j] = '\0';
return (strgconc);
}
