#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: arguments count
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int total, change, value, point;
	int coins[] = {25, 10, 5, 2, 1};

	point = total = change = value = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[point] != '\0')
	{
		if (total >= coins[point])
		{
			value = (total / coins[point]);
			change += value;
			total -= coins[point] * value;
		}

		point++;
	}

	printf("%d\n", change);
	return (0);
}
