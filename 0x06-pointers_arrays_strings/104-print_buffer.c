#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determine if n is a printable ASCII character
 *
 * @n: an integer
 * Return: 1 if true and 0 if false
 */

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values for string b
 *
 * @b: string to be printed
 * @start: starting position
 * @end: ending position
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
		{
			printf("%02x", *(b + start + i));
		}
		else
		{
			printf("  ");
		}

		if (i % 2)
		{
			printf(" ");
		}

		i++;
	}
}

/**
 * printASCII - print ASCII values for string b
 *
 * @b: string to be printed
 * @start: starting position
 * @end: ending position
 */

void printASCII(char *b, int start, int end)
{
	int ch;
	int i = 0;

	while (i < end)
	{
		ch = *(b + i + start);

		if (!isPrintableASCII(ch))
		{
			ch = 46;
		}
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - print a buffer
 *
 * @b: a pointer to a string
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
