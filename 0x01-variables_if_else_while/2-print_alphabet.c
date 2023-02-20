#include <stdio.h>
#include <stdlib.h>
/**
 * main - all alphabet in lower case
 *
 * Return: 0
 */
int main(void)
{
	int ch = 'a';
	while (ch <= 'z')

	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
