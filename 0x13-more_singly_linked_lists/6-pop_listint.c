#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the content
 * @head: Starting list of the linked list(Head)
 * Return: content of the head and 0 if empty
 */

int pop_listint(listint_t **head)
{
	int content;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	content = (*head)->n;

	return (content);
}
