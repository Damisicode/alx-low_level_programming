#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of the node
 * @n: integer to be added
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
