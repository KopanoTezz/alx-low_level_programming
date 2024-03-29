#include "lists.h"

/**
 * sum_listint - calculates sum of all data in listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tem = head;

	while (tem)
	{
		sum += tem->n;
		tem = tem->next;
	}

	return (sum);
}
