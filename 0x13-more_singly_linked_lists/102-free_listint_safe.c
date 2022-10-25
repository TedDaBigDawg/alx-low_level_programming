#include "lists.h"

/**
 * free_listp2 - frees a linked list
 *
 * @head: pointer to the first node of a linked list
 * Return: void
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *node;

	if (head != NULL)
	{
		node = *head;

		while ((temp = node) != NULL)
		{
			node = node->next;
			free(temp);
		}

		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: pointer to the first node of a linked list
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodesize = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;

	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
		{
			exit(98);
		}

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;
		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;

			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nodesize);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nodesize++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (nodesize);
}
