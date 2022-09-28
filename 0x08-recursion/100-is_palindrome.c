#include "main.h"

/**
 * _strlen_recursion - length of string
 *
 * @s: a pointer to the string to be checked
 * Return: an integer
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}

/**
 * palin - palindrome
 *
 * @s: a pointer to the string to be checked
 * @l: position
 * Return: boolean value
 */

int palin(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (palin(s + 1, l - 2));
	}

	return (0);
}

/**
 * is_palindrome -  return 1 if a string is a palindrome and 0 if not
 *
 * @s: a pointer to the string to be checked
 * Return: an integer 1 or 0
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (palin(s, len - 1));
}
