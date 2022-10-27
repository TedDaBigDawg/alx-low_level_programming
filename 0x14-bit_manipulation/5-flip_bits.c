#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: number to be checked
 * @m: number to flip to
 * Return: number of bits needed to flip from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m, bits = 0;

	while (value > 0)
	{
		bits += (value & 1);
		value >>= 1;
	}

	return (bits);
}
