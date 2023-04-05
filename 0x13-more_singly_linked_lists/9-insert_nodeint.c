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
	listint_t *tmp, *prtn = *head;

	tmp = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	while (idx > 1 && prtn)
	{
		idx--;
		prtn = prtn->next;
	}
	if (idx == 1)
	{
		tmp->next = prtn->next;
		prtn->next = tmp;
		return (tmp);
	}
	else
		return (NULL);
}
