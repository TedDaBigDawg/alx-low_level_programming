#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiply two numbers and return the result
 *
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 if success and 1 if theres an error
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}


