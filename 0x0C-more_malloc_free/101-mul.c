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
 * Return: void
 */

void *mul_array(char *arr1, int len1, char a2, char *arr3, int lena)
{
	int mul = 0;
	int i, j;

	j = lena;

	for (i = len1 - 1; i >= 0; i--)
	{
		mul += (arr1[i] - '0') * (a2 - '0') + (arr3[j] - '0');
		arr3[j] = (mul % 10) + '0';
		mul /= 10;
		j--;
	}

	while (mul != 0)
	{
		mul += arr3[j] - '0';
		arr3[j] = (mul % 10) + '0';
		mul /= 10;
		j--;

	}

	return (arr3);
}

/**
 * print_array - print an array
 *
 * @n: number of elements
 * @a: a pointer to an array
 * Return: void
 */

void print_array(char *a, int n)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < n)
	{
		i++;
	}

	for (; i < n; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');
}

/**
 * main -  multiplies two positive numbers
 *
 * @argc: arguments length
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *tables;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	int i, j, len1, len2, len3;

	if (argc != 3 || is_number(argv[1]) == 1 || is_number(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}

	for (len1 = 0; argv[1][len1]; len1++)
	{
		for (len2 = 0; argv[2][len2]; len2++)
		{
			len3 = len1 + len2;
		}
	}

	tables = _calloc(lenres, sizeof(int));

	if (tables == NULL)
	{
		free(tables);
		return (0);
	}

	for (i = len2 - 1, j = 0; i >= 0; i--)
	{
		tables = mul_array(argv[i], len1, argv[2][i], tables, (len3 - 1 - j));
		j++;
	}

	print_array(tables, len3);
	free(tables);
	exit(EXIT_SUCCESS);
	return (0);
}
