#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: double pointer to head
 * Return: the address of the new element, or NULL if it failed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	if (head == NULL)
		return;
	current = head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	while (current->prev != NULL)
	{
		temp = current;
		current = current->prev;
		free(temp);
	}
	head = NULL;
	free(current);
}
