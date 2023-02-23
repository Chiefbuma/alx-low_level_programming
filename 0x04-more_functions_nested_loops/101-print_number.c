#include "main.h"

/**
 * print_number -  print number
 * @n: is a var
 * Return:  0.
 */
void print_number(int n)
{
	unsigned int y;
	int l, a;

	a = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		y = n;
	while (y / a > 9)
	{
		a = a * 10;
	}
	while (a > 0)
	{
		n = y / b;
		y = y % a;
		_putchar (l + '0');
		a = a / 10;
	}
	}
}

