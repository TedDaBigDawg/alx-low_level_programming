#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: width of the grid
 * @av: height of the grid
 * Return: a string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, j = 0, k = 0, counter = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			counter++;
			j++;
		}
		i++;
	}
	counter = counter + ac + 1;
	s = malloc(sizeof(char) * counter);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
