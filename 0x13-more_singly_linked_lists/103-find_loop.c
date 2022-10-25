#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the first node of the linked list
 * Return: address of the node where the loop starts or
 * NULL if no loop found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1 = head;
	listint_t *node2 = head;

	if (!head)
	{
		return (NULL);
	}

	while (node1 && node2 && node2->next)
	{
		node2 = node2->next->next;
		node1 = node1->next;

		if (node2 == node1)
		{
			node1 = head;

			while (node1 != node2)
			{
				node1 = node1->next;
				node2 = node2->next;
			}

			return (node2);
		}
	}

	return (NULL);
}
