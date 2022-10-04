#include "main.h"
/**
 * word_count - counts number of words in a string
 *
 * @s: a pointer to the string to be checked
 * Return: an integer
 */
int word_count(char *s)
{
	int i, j = 0, sign = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			sign = 0;
		else if (sign == 0)
		{
			sign = 1;
			j++;
		}
	}
	return (j);
}
/**
 * **strtow - splits a string into words
 *
 * @str: a pointer to the string to be split
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, k = 0, len = 0, words, c = 0;
	char *tmp, **matrix;
	int start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
