#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints char c
 * @c: Print this char
 *
 * Return:1 on succes
 * On error, -1  is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
