#include "lists.h"

/**
 * free_dlistint - Frees dlistint_t list.
 * @head: Points to head of the list
 * Return: Pothing
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
