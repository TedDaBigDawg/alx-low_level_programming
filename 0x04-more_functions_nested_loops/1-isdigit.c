#include "main.h"

/**
 * _isdigit - Return 1 if c is a digit returns 0 otherwise
 * @c: character to be checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
