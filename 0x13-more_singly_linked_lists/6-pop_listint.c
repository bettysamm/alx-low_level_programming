#include "lists.h"

/**
 * pop_listint - Deletes the pop out from linked list.
 * @head: Pointer to pointer to the first node of the list.
 * Return: The value of the deleted node, or 0 if empty.
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
