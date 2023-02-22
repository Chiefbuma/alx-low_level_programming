#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: letter
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
