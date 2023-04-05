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

	if (head == NULL || *head == NULL)
		return (NULL);

	bk = NULL;

	while (*head->next != NULL)
	{
		ft = *head->next;
		*head->next = bk;
		bk = *head;
		*head = ft;
	}

	*head->next = bk;

	return (*head);
}
