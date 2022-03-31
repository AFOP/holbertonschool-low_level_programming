#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_listint -  function that frees a listint_t list.
 * @head: the beginning of the list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	head->n = 0;
	free(head);
}
