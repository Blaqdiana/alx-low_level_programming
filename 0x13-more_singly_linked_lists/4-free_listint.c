#include "lists.h"

/**
 * free_listint - Function that frees a list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}

}
