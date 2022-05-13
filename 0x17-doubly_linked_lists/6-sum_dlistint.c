#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: double pointer to head
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *psuma;
	int suma = 0;

	if (head == NULL)
		return (0);
	psuma = head;
	while (psuma != NULL)
	{
		suma += psuma->n;
		psuma = psuma->next;
	}
	return (suma);
}
