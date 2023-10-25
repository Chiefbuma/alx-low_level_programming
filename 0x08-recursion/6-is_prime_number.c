#include "main.h"

int true_prime(int n, int i);

/**
 * is_prime_number -  an integer is a prime number or not
 * @n: number to check
 *
 * Return: 1 if  prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (true_prime(n, n - 1));
}

/**
 * true_prime - calculates receursively
 * @n: number to check
 * @i: number of times
 *
 * Return: 1 if  prime, 0 if not
 */
int true_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (true_prime(n, i - 1));
}
