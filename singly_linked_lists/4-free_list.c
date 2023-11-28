#include "lists.h"

/**
 * free_list - libère une liste list_t
 * @head: pointeur vers la tête de liste chainée
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
