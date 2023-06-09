#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int v;
	int e;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	e = 0;
	while (src[e] != '\0')
	{
		dest[v] = src[e];
		v++;
		e++;
	}

	dest[v] = '\0';
	return (dest);
}
