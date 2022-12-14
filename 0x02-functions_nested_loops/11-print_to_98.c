#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Return 0 and print all natural numbers from n to ninety eight
 *
 * @n: the number to start counting from
 * Return: Always 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
