#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: start of the linked list
 * @idx: index of the list where the node is to be added
 * @n: integer to be contained by the node
 * Return: address of the new node of NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *tmp;
	unsigned int i = 0;

	tmp = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		free(temp);
		return(NULL);
	}
	temp->n = n;
	temp->next = NULL;
	while (tmp != NULL)
	{
		if ((i + 1) == idx)
		{
			temp->next = tmp->next;
			tmp->next = temp;
			return (*head);
		}

		tmp = tmp->next;
		i++;
	}

	if (i == idx)
	{
		temp->next = (*head)->next;
		(*head)->next = temp;
		return (*head);
	}

	return (NULL);
}
