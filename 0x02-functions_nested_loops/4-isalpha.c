#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: letter
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _iisalpha(int r )
{
	if (((r >= 'a') && (r <= 'z')) || ((r >= 'A') && (r <= 'Z')))
		return (1);
	else
		return (0);
}
