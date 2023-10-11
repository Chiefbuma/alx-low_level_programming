#include <stdio.h>
/**
 * main - putchar alphabet  lowercase excep q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		if (d != 'e' && d != 'q')
		{
		putchar(d);
		}
		d++;
	}
	putchar('\n');
	return (0);
}
