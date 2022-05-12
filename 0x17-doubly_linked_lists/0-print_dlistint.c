#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer of head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
