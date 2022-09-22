#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 *
 * @str: a pointer to the string to be changed
 * Return: a string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
}
