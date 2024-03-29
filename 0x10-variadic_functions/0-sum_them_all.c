#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all  sum
 * @n:  paramters
 * @...:  variable number 
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int k, sum = 0;
va_start(ap, n);
for (k = 0; k < n; k++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}

