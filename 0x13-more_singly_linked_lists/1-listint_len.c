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
	const listint_t *temp;
	unsigned int count;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
