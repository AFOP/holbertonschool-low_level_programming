#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer the beginning of the list
 * @index: index of the list
 * Return: zero if is NULL or return node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		head = head->next;
		i++;
		if (i == index)
			return (head);
	}
	return (0);
}
