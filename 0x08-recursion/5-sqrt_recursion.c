#include "main.h"
/**
* _sqrt_recursion - main function
* @n: - value
* Return: 0
 */
int _sqrt_recursion(int n);
{
if (n < 0)
return (-1);
else if (n  ==  0  || n == 1)
return (n);
else
{
int i;
for (i = 1; i * i <= n; i++)
{
if (i * i == n)
{
return (i);
}
}
