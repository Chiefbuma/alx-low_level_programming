#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int slen = 0, j = 0;

	while (dest[slen])
	{
		slen++;
	}

	while (j < n && src[j])
	{
		dest[slen] = src[j];
		slen++;
		j++;
	}

	dest[slen + n + 1] = '\0';

	return (dest);
}
