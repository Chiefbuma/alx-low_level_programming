#include "main.h"

/**
 * @x: the character to check
 * @i: the times to loop
 * print_alphabet - prints alphabet folled by new line
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
