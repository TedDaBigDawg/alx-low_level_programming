#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add two numbers
 *
 * @n1: a pointer to the first number
 * @n2: a pointer to the second number
 * @r: buffer to restore the result
 * @size_r: buffer size
 * Return: something
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, op, bg, dr1, dr2, adder = 0;

	while (*(n1 + c1) != '\0')
	{
		c1++;
	}

	while (*(n2 + c2) != '\0')
	{
		c2++;
	}

	if (c1 >= c2)
	{
		bg = c1;
	}
	else
	{
		bg = c2;
	}

	if (size_r <= bg + 1)
	{
		return (0);

		r[bg + 1] = '\0';
		c1--;
		c2--;
		size_r;
		dr1 = *(n1 + c1) - 48;
		dr2 = *(n2 + c2) - 48;
	}

	while (bg >= 0)
	{
		op = dr1 + dr2 + adder;

		if (op >= 10)
		{
			adder = op / 10;
		}
		else
		{
			adder = 0;
		}

		if (op > 0)
		{
			*(r + bg) = (op % 10) + 48;
		}
		else
		{
			*(r + bg) = '0';
		}

		if (c1 > 0)
		{
			c1--;
			dr1 = *(n1 + c1) - 48;
		}
		else
		{
			dr1 = 0;
		}

		if (c2 > 0)
		{
			c2--;
			dr2 = *(n2 + c2) - 48;
		}
		else
		{
			dr2 = 0;
		}
		bg--;
		size_r--;
	}

	if (*(r) == '0')
	{
		return (r + 1);
	}
	else
	{
		return (r);
	}
}