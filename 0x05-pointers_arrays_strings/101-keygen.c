#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords for program
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	int j = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (j < 2772)
	{
		i = rand() % 128;

		if ((j + i) > 2772)
		{
			break;
		}

		j = j + i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
