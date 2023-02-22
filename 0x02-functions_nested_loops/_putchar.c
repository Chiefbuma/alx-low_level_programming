#include "main.h"
#include <unistd.h>
/**
* _putchar - function writes to stdio
* @c: char
*
* Return: 0
* errot, -1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
