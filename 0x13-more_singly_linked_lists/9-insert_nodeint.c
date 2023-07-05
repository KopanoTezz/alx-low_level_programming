#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in linked list,
 * at a given position
 * @head: pointer to first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (k = 0; tem && k < idx; k++)
	{
		if (k == idx - 1)
		{
			new->next = tem->next;
			tem->next = new;
			return (new);
		}
		else
			tem = tem->next;
	}

	return (NULL);
}
