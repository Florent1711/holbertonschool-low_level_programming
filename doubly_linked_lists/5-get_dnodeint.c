#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - renvoie le nième noeud d'une liste dlistint_t
 * @head: pointeur vers le noeud
 * @index: index pour trouver le noeud
 *
 * Return: NULL ou current
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
