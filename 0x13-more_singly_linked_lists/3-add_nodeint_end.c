#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list
 * @head: head of the node
 * @n: integer to be added
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *temp1;

	temp1 = malloc(sizeof(listint_t));

	if (temp1 == NULL)
	{
		free(temp1);
		return (NULL);
	}
	temp1 = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;
	while (temp1 && temp1->next != NULL)
	{
		temp1 = temp1->next;
	}

	if (temp1)
		temp1->next = temp;
	else
		*head = temp;

	return (temp);
}
