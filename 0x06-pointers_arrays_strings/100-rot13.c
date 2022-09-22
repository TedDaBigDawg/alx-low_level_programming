#include "main.h"

/**
 * rot13 - encode a string using rot13
 *
 * @s: a pointer to the string to be encoded
 * Return: a string
 */

char *rot13(char *s)
{
	int i;
	int counter = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + counter) == letters[i])
			{
				*(s + counter) = rot13[i];
				break;
			}
		}

		count++;
	}

	return (s);
}
