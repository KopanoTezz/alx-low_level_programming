#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int v;
	int s;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
	dest[v] = src[s];
	v++;
	s++;
	}
	dest[v] = '\0';
	return (dest);
}
