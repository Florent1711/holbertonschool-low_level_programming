#include "lists.h"

/**
 * free_list - libère une liste list_t
 * @head: pointeur vers la tête de liste chainée
 *
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
