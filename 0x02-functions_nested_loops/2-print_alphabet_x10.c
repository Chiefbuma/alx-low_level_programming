#include "main.h"

/**
 * print_alphabet - prints alphabet folled by new line
 */
void print_alphabet(void)
{
char x = 'a';
int i;

for (i = 0; i <= 10; i++)
{

while (x <= 'z')
{
	_putchar(x);
	x++;
}
x = 'a';
}
_putchar('\n');
}
