#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer of head
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
