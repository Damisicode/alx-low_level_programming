#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns sum of all the data a listint_t linked list
 * @head: start of the list
 * Return: sum of all elements of a linked list and return 0 if list is empty
 */

size_t sum_listint(listint_t *head)
{
	int sum = 0;
	listint *temp;

	temp = head;
	while (temp && temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

	return (sum);
}
