#include "main.h"

/**
 * _evaluate - evaluate number
 *
 * @num: an integer
 * @i: an integer
 * Return: 0 or 1
 */

int _evaluate(int num, int i)
{
	if (i == num - 1)
	{
		return (1);
	}
	else if (num % i == 0)
	{
		return (0);
	}

	if (num % i != 0)
	{
		return (_evaluate(num, i + 1));
	}

	return (0);
}

/**
 * is_prime_number - return 1 if theinput integer is a prime number otherwise 0
 *
 * @n: number to be checked
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	int i;

	i = 2;

	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	return (_evaluate(num, i));
}
