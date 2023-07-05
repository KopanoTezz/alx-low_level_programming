#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to first element in linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (numb);
}
