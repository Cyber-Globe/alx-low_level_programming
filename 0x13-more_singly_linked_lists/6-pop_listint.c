#include "lists.h"

/**
 * pop_listint - Deletes the head node on listint_t
 * @head: A pointer to the address of listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         else - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}

