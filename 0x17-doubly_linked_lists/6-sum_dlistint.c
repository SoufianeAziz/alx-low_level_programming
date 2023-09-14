#include "lists.h"
/**
 * i_dlistint - Returns the i of all the data (n) of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: i of all the data (n), or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		i += current->n;
		current = current->next;
	}

	return (i);
}

