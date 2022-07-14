#include "lists.h"
/**
 * pop_listint - function that deletes the head node of list
 * @head: head
 * Return: head's node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int n;

	if (head != NULL)
	{
		a = (*head)->next;
		n = (*head)->n;

		free(*head);
		*head = a;
	}

	return (n);
}
