#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: Starting address of the linked list
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp1;

	if (*head == NULL)
		return (NULL);

	temp = *head;
	*head = temp->next;
	temp1 = (*head)->next;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (temp1 != NULL)
	{
		(*head)->next = temp;
		temp = *head;
		*head = temp1;
		temp1 = (*head)->next;
	}
	(*head)->next = temp;
	return (*head);
}
