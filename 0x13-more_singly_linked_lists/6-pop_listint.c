#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node.
 * @head: double pointer the beginning of the list
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *temp, *current;

	if (head == NULL)
		return (0);
	current = *head;
	temp = current;
	current = current->next;
	i = temp->n;
	free(temp);
	*head = current;
	return (i);
}
