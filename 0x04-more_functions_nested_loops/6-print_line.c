#include "main.h"

/**
 * print_line -  checks for checks for a digit (0 through 9).
 * @n: number of times
 *
 * Return: 0.
 */
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
