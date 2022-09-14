#include "main.h"

/**
 * _islower - Return 0 and is checking for lower case letters
 * @c: contains value to be compared
 * Return: Always 0
 */


int _islower(int c)
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
