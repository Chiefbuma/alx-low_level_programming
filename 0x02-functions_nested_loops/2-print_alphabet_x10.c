#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
char x = 'a';
int i;

i = 0;

while (i < 10)
{
	x = 'a';
	while (x <= 'z')
{
	_putchar(x);
	x++;
}
_putchar('\n');
i++;
}
}
