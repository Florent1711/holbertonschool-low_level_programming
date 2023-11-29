#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_dlistint - libère une liste dlistint_t
 * @head: pointeur vers le noeud
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
