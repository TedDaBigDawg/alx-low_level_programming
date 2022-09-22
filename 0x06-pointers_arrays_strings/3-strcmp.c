#include "main.h"

/**
 * _strcmp -compare two strings
 *
 * @s1: a pointer to the string to be compared
 * @s2: a pointer to the second string to be compared
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	char *string1 = s1;
	char *string2 = s2;

	while (*string1 != '\0' && *string2 != '\0' && *string1 == *string2)
	{
		string1++;
		string2++;
	}

	return (*string1 - *string2);
}
