#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints base 16 digits and lower case
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char z;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (z = 'a'; z <= 'f'; z++)
	putchar(z);
	putchar('\n');

	return (0);
}
