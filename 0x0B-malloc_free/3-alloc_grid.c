#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mem;
	int a, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		mem[a] = malloc(sizeof(int) * width);

		if (mem[a] == NULL)
		{
			for (; a >= 0; a--)
				free(mem[a]);

			free(mem);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (y = 0; y < width; y++)
			mem[a][y] = 0;
	}

	return (mem);
}
