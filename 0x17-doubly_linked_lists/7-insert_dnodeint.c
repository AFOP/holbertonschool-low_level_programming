#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head
 * @idx: index of the position of the node
 * @n: data for new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *inser_n, *new = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	inser_n = *h;
	i = 1;
	if (inser_n != NULL)
            while (inser_n->prev != NULL)
                inser_n = inser_n->prev;
	while (inser_n != NULL)
	{
		if (i == idx)
		{
			if (inser_n->next == NULL)
				new = add_dnodeint_end(h, n);
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new != NULL)
				{
					new->n = n;
					new->next = inser_n->next;
					new->prev = inser_n;
					inser_n->next->prev = new;
					inser_n->next = new;
					return (new);
				}
			}
		}
		inser_n = inser_n->next;
		i++;
	}
	return (NULL);
}
