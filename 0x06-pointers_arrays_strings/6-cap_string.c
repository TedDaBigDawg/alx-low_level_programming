#include "main.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @s: a pointer to the string to be capitalized
 * Return: a string
 */

char *cap_string(char *s)
{
	int count = 0;
	int i;
	int seperators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
	{
		count++;
	}

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == seperators[i])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
				{
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				}
				break;
			}
		}
		count++;
	}
	return (s);
}

