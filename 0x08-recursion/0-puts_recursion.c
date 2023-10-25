#include "main.h"
/**
 * _puts_recursion - the name of the function
 * @s: here is the input
 * _putchar - another function
 * Return: 0
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
