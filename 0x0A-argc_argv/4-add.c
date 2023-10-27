#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert to integer
 * @s: string to be converted
 * Return: the int converted from the string
 */


int _atoi(char *s)
{
int k, l, o, len, q, digit;

k = 0;
l = 0;
o = 0;
len = 0;
q = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (k < len && q == 0)
{
if (s[k] == '-')
++l;

if (s[k] >= '0' && s[k] <= '9')
{
digit = s[k] - '0';
if (l % 2)
digit = -digit;
o = o * 10 + digit;
q = 1;
if (s[k + 1] < '0' || s[k + 1] > '9')
break;
q = 0;
}
k++;
}

if (q == 0)
return (0);

return (o);
}
/**
 * main - adds  numbers
 * @argc: arguments
 * @argv: array
 * Return: 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
int sum, allnum, k;

sum = 0;

for (k = 1; k < argc; k++)
{
for (int j = 0; argv[k][j] != '\0'; j++)
{
if (argv[k][j] > '9' || argv[k][j] < '0')
{
puts("Error");
return (1);
}
}
}

for (k = 1; k < argc; k++)
{
allnum = _atoi(argv[k]);
if (allnum >= 0)
{
sum += allnum;
}
}

printf("%d\n", sum);
return (0);
}

