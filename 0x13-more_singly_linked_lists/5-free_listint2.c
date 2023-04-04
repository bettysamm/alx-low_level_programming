#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer to head of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
	*head = NULL;
}
