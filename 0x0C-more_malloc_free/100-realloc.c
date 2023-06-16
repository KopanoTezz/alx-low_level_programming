#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - realloc a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pnt1;
	char *old_pnt;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pnt1 = malloc(new_size);
	if (!pnt1)
		return (NULL);

	old_pnt = ptr;

	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			pnt1[k] = old_pnt[k];
	}

	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			pnt1[k] = old_pnt[k];
	}

	free(ptr);
	return (pnt1);
}
