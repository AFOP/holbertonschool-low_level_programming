#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: double pointer the beginning of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
