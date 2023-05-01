#include "lists.h"

/**
 * sum_listint - Calculates the sum data (n) of a listint_t list.
 * @head: A point to listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Else - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}


