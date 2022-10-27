#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: a pointer to the number to be checked
 * @index: index of the bit
 * Return: an int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) *8))
	{
		return (-1);
	}

	*n ^= (1 << index);

	return (1);
}
