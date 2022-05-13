#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: double pointer to head
 * @index: index of the position of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
    dlistint_t *del_n;
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
    if (head != NULL)
            while (head->prev != NULL)
                head = head->prev;
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