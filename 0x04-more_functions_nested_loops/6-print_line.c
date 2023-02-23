#include "main.h"

/**
 * print_line -  checks for checks for a digit (0 through 9).
 * @n: number of times
 *
 * Return: 0.
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('\n');
	} else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
