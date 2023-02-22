#include "main.h"
#include <unistd>
/**
 * _putchar - function writes to stdio
 * @c: char 
 *
 * Return: 0
 * error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
