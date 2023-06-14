#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concat command line args into a single string
 * @ac: Number of args
 * @av: Double pointer to an array of arg strings
 * Return: Pointer to concat string, or NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int i, j, tl = 0, ci = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			tl++;
	}
	tl += ac;

	str = malloc(sizeof(char) * (tl + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[ci] = av[i][j];
			ci++;
		}
		if (str[ci] == '\0')
		{
			str[ci++] = '\n';
		}
	}
	return (str);
}
