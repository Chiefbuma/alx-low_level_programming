#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers
 * @separator: string
 * @n:  integers
 * @...: A variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int numx;

va_start(nums, n);

for (numx = 0; numx < n; numx++)
{
printf("%d", va_arg(nums, int));

if (numx != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(nums);
}

