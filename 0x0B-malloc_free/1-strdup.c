#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *abc;
	int c, r = 0;

	if (str == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;

	abc = malloc(sizeof(char) * (c + 1));

	if (abc == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		abc[r] = str[r];

	return (abc);
}
