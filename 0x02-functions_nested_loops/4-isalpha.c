#include "main.h"
/**
 * _isalpha - checks for uppercase character
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
} else
{
return (0);

}
}
