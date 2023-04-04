#include "lists.h"

/**
 * free_listint2 - Function that frees a list with NULL head.
 * 
 * @head: Pointer the head.
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
