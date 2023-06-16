#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of ints
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pnt;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pnt = malloc(sizeof(int) * size);

	if (pnt == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		pnt[k] = min++;

	return (pnt);
}
