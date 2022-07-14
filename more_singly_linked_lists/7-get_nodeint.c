#include "lists.h"
/**
 * get_nodeint_at_index - function that return the nth node of a list
 * @head: head
 * @index: index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
