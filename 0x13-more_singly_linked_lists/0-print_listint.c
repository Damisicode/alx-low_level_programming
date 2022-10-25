#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of the linked list
 * Return: the number of nodes
 */

int print_listint(const listint_t *h)
{
	listint_t *temp;
	size_t count;

	count = 0;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		printf("Error\n");
		return (1);
	}
	temp->n = h->n;
	temp->next = h->next;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	free(temp);

	return (count);
}
