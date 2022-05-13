#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: double pointer to head
 * @index: index of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *compare;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index < 0)
		return (NULL);
	compare = head;
	while (compare->next != NULL)
	{
		if (i == index)
			return (compare);
		compare = compare->next;
		i++;
	}
	return (NULL);
}
