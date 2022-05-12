#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to head
 * @n: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end;

	end = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
		new->prev = end;
	}
	new->next = NULL;
	return (new);
}
