#include "main.h"
#include <stdlib.h>

/**
 *  _atoi - converts a char to an integer
 *
 *  @c: character to be converted
 *  Return: an integer
 */

int _atoi(char c)
{
	unsigned int result;

	if (c <= '9' && c >= '0')
	{
		result = c - '0';
	}

	return (result);
}

/**
 * is_number - checks if string is a number
 *
 * @argv: a pointer to the string to be checked
 * Return: 0 (Success)
 */

int is_number(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		if (argv[i] < 48 || argv[i] > 57)
		{
			return (1);
		}
	}

	return (0);
}

/**
 * _calloc - allocate array 
 *
 * @nmemb: number of elements in the array
 * @size: size of the element
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *tab;

	tab = malloc(size * nmemb);

	if (tab == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
		tab[i] = '0';
	}

	return (tab);
}

/**
 * mul_array - multiply two arrays
 *
 * @arr1: first array
 * @len1: length of first array
 * @a2: char
 * @arr3: array for result
 * @lena: length of arr3
 * Return void
 */

void *mul_array(char *arr1, int len1, char a2, char *arr3, int lena)
{

}

