#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 *
 * @argc: arguments count
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
