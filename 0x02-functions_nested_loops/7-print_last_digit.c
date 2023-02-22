#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @dx: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int dx)
{
	int dx;

	dx = (dx % 10);

	if (dx < 0)
	{
		dx = (-1 * dx);
	}

	_putchar(dx + '0');
	return (dx);
}
