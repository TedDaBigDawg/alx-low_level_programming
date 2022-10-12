#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: a multiplied by b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 *
 * @a: first integer
 * @b: second integer
 * Return: result of a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divide by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
