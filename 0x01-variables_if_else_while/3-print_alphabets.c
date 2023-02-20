#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to print alphabet in lower and upper case
 *
 * Return: 0
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch < 'a')
	{
		putchar(ch);
		ch++;
	}
	while (CH < 'A')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
