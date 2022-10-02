#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments recieved
 *
 * @argc: arguments count
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	if (argc > 0)
	{
		while (counter < argc)
		{
			printf("%s\n", argv[counter]);

			counter++;
		}

	}

	return (0);
}
