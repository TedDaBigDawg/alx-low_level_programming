#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 *
 * @s: a pointer to the string to be searched
 * @accept: a pointer to the set of bytes to search for
 * Return: string s any characters that matches characters in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}

			i++;
		}

		s++;
	}

	return (0);
}
