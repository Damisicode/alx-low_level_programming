#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: start of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = *head;
		free(head);
		*head = hold->next;
		free(hold);
	}
	head = NULL;
	free(head);
	free(*head);
}
