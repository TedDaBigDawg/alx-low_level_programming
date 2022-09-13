#include "main.h"

/**
 * _islower - is checking for lower case letters
 * @c: contains value to be compared
 * Return: Always 0
 */


int is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
