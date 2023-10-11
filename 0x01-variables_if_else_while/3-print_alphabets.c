#include <stdio.h>
/**
 * main - putchar alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char d = 'a';
	char e = 'A';

	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	while (e <= 'Z')
	{
		putchar(e);
		e++;
	}
	putchar('\n');
	return (0);
}
