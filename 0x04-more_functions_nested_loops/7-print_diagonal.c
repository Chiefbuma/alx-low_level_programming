#include "main.h"

/**
 * print_diagonal -  draw diagona;
 * @n: input number of times
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int ko, kp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ko = 1; ko <= n; ko++)
		{
			for (kp = 1; kp < ko; kp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
