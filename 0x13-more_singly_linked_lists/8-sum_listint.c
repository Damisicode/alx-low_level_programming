#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns sum of all the data a listint_t linked list
 * @head: start of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head && head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return (sum);
}
