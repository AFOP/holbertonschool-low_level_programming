#include "lists.h"
/**
 * del_node - delete the node
 * @del_n: pointer of the node
 * Return: Nothing
 */
void del_node(dlistint_t *del_n)
{
	del_n->next = NULL;
	del_n->prev = NULL;
	del_n = NULL;
}
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: double pointer to head
 * @index: index of the position of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_n, *nodo;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	del_n = nodo = *head;
	while (nodo != NULL)
	{
		if (i == index)
		{
			if (nodo->next == NULL && nodo->prev == NULL)
				del_n = nodo = *head = NULL;
			else if (nodo->prev == NULL)
			{
				nodo = nodo->next;
				*head = nodo;
				nodo->prev = NULL;
				del_node(del_n);
			}
			else if (nodo->next == NULL)
			{
				del_n = nodo;
				nodo = nodo->prev;
				nodo->next = NULL;
				del_node(del_n);
			}
			else
			{
				del_n = nodo;
				nodo = nodo->prev;
				nodo->next = del_n->next;
				nodo->next->prev = nodo;
				del_node(del_n);
			}
			free(del_n);
			return (1);
		}
		nodo = nodo->next;
		i++;
	}
	return (-1);
}
