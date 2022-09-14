#include "main.h"

/**
 * print_last_digit - Return 0 and print last digit
 *
 * @n: the int to print
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = (n % 10);

	return (lastDigit);
}
