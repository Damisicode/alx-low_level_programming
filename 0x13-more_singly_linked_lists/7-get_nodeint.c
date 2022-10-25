#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: starting node
 * @index: position to check
 * Return: node at the position and NULL is node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head && head->next != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return (NULL);
}
