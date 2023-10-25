#include "main.h"

/**
 * check_palindrome - checks for palindrome recursively
 * @s: string to check
 * @i:  the start of the string
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len);

/**
 * _strlen_pal - returns the length of a string recursively
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_pal(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is a palindrome, 0 if it's not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_palindrome(s, 0, _strlen_pal(s)));
}

/**
 * _strlen_pal - returns the length of a string recursively
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_pal(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_pal(s + 1));
}

/**
 * check_palindrome - checks for palindrome
 * @s: string to check
 * @i: iterator for the start of the string
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1)
return (0);
if (i >= len)
return (1);
return (check_palindrome(s, i + 1, len - 1));
}

