#include "lists.h"

/**
 * sum_listint - returns sum of all the data a listint_t linked list
 * @head: start of the list
 * Return: sum of all elements of a linked list and return 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head->next && head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return (sum);
}
