#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 *
 * @head: Pointer to the head of a list.
 * @n: Number to enter in the new mode.
 *
 * Return: Address of new element or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;

		return (new_node);
	}
}
