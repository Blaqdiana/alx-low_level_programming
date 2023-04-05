#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given position.
 *
 * @head: Pointer to head.
 * @idx: Index of the list.
 * @n: integer to enter.
 *
 * Return: Address of new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *tmp, *prtn = *head;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->n = n;

	if (idx == 0)
	{
		tmp->next = prtn;
		*head = tmp;
		return (tmp);
	}

	for (counter = 0; counter < (idx - 1); counter++)
	{
		if (prtn == NULL || prtn->next == NULL)
		{
			return (NULL);
		}

		prtn = prtn->next;
	}

	tmp->next = prtn->next;
	prtn->next = tmp;

	return (tmp);
}
