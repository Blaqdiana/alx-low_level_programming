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
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}

}
