#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list
 * @head: start of the linked list
 * @index: position to be added
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		if ((i + 1) == index)
		{
			temp->next = (temp->next)->next;
			return (1);
		}

		temp = temp->next;
		i++;
	}
	if (index == 0)
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			return (1);
		}
	}

	if ((i + 1) == index)
	{
		temp->next = (temp->next)->next;
		return (1);
	}

	return (-1);
}
