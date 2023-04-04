#include "lists.h"

/**
 * pop_listint - Deletes the head nodeof a listint_t linked list.
 *
 * @head: Pointer to head.
 *
 * Return: head node data.
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (*head == NULL)
		return (value);

	tmp = *head;
	value = tmp->n;
	*head = tmp->next
	free(*head);

	return (value);
}
