#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *rp = "_putchar";

	while (*rp)
	{
		_putchar(*rp);
		rp++;
	}
	_putchar('\n');

	return (0);
}
