#include "main.h"
/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The input number
 * Return: The square root or -1 if it does not exist.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
int i = 1;
while (i * i <= n)
{
if (i * i == n)
{
return (i);
}
i++;
}
return (-1);
}
}
