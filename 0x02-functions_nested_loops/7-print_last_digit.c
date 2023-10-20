#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (x < 0)
		x = -n;

	a = x % 10;

	if (x < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
