#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes in a
 *		looped listint_t.
 *
 * @head: A pointer to head.
 *
 * Return: 0 or the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
	if (tortoise == hare)
	{
	tortoise = head;
	while (tortoise != hare)
	{
		nodes++;
		tortoise = tortoise->next;
		hare = hare->next;
	}

	tortoise = tortoise->next;
	while (tortoise != hare)
	{
		nodes++;
		tortoise = tortoise->next;
	}

	return (nodes);
	}

	tortoise = tortoise->next;
	hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a safe linked listint with a loop.
 *
 * @head: Pointer to head.
 *
 * Return: Number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, id = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
	}

	else
	{
		for (id = 0; id < nodes; id++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
