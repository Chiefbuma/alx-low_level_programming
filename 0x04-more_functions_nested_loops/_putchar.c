i#include" main.h"
#include <unistd.h>

/**
 * _putchar - prints char c
 * @c: Print this char
 *
 * Return On succes 1
 * On error, 0 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
