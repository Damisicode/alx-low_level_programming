#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - determine the number of elements in a linked list
 * @h: list head
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	listint_t *temp;
	unsigned int count;

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
		count++;
		temp = temp->next;
	}
	free(temp);
	return (count);
}
