#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: a pointer to the the string to be searched
 * @needle: a pointer to the substring to be located
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *string1, *string2;

	while (*haystack != '\0')
	{
		string1 = haystack;
		string2 = needle;

		while (*haystack != '\0' && *string2 != '\0' && *haystack == *string2)
		{
			haystack++;
			string2++;
		}

		if (*string2 == '\0')
		{
			return (string1);
		}
		haystack = string1 + 1;
	}

	return (0);
}
