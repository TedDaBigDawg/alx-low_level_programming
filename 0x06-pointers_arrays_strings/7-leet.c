#include "main.h"

/**
 * leet - encode a string into 1337
 *
 * @s: a pointer to the string to be encoded
 * Return: a string
 */

char *leet(char *s)
{
	int counter = 0;
	int i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + counter) == lowercase[i] || *(s + counter) == uppercase[i])
			{
				*(s + counter) = numbers[i];
				break;
			}
		}
		counter++;
	}

	return (s);
}
