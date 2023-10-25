#include "main.h"
/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The input number.
 * @i: The iterator used to check for the square root.
 * Return: The square root or -1 if it does not exist.
 */
int _sqrt_recursion(int n, int i)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return  (_sqrt_recursion(n, i + 1));
}
}


