#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the
 *		index of listint linked list.
 *
 * @head: Pointer to head.
 * @index: Index of the list.
 *
 * Return: 1 if succeeded and -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prt;
	unsigned int count = 0;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		while (tmp != NULL && count != index - 1)
		{
			count++;
			tmp = tmp->next;
		}
		if (count != index - 1)
			return (-1);
		prt = tmp->next;
		tmp->next = tmp->next->next;
		free(prt);
		return (1);
	}

}
