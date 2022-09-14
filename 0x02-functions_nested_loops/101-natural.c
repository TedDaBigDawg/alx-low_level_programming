#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int sumof = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sumof += i;
		}
		i++;
	}
	printf("%d\n", sumof);

	return (0);
}
