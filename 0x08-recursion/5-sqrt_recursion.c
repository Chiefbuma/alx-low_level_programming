#include "main.hi"

/**
 * real_sqrt_recursion - square root of a number.
 * @n: The number for which the square root is calculated.
 * @i: Iterator for the recursive calculation.
 * Return: The resulting square root or -1
 */
int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is calculated.
 * Return: The resulting square root or -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - square root of a number.
 * @n: The number for which the square root is calculated.
 * @i: Iterator for the recursive calculation.
 * Return: The resulting square root or -1
 */
int real_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (real_sqrt_recursion(n, i + 1));
}

