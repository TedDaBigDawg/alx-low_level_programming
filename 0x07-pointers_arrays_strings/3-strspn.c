#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: a pointer to the string to be checked
 * @accept: a pointer to the second string
 * Return: an integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter;
	char string1, string2;

	counter = 0;
	string1 = s;
	string2 = accept;
	i = 0;

	while (string1[i] != '\0')
	{
		j = 0;

		while (string2[j] != '\0')
		{
			if (string2[j] == string1[i])
			{
				counter++;

				break;
			}
			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}

	return (counter);
}
