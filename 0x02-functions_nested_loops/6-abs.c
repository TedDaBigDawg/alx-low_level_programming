#include "main.h"

/**
 * _abs - Return 0 and calculate absolute value of int
 *
 * @n: The int to calculate
 * Return: Always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
