#include "lists.h"

/**
 * reverse_listint - Reverses a listint linked list.
 *
 * @head: Pointer to head.
 *
 * Return: pointer.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ft, *bk;

	bk = NULL;

	while (*head != NULL)
	{
		ft = (*head)->next;
		(*head)->next = bk;
		bk = *head;
		*head = ft;
	}

	*head = bk;

	return (*head);
}
