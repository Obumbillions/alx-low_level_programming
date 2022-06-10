#include "lists.h"

/**
 * sum_dlistint - Add all the data (n) of a dlistint_t linked list.
 * @head: Head of the list.
 * Return: Returns the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	for (; head; head = head->next)
		total += head->n;
	return (total);
}
