#include "main.h"

/**
 * _isupper - Returns 1 if c is upper and 0 if c is lower case
 * @c: the character to be checked
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
