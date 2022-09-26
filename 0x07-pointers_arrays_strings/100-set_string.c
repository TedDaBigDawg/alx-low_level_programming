#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 *
 * @s: a pointer to a pointer to a string to be changed
 * @to: a pointer to  the string to be copied
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
