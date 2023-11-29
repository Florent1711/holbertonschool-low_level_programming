#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_dlistint - libère une liste dlistint_t
 * @head: pointeur vers le noeud
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head; /*pointeur vers le noeud actuel*/
	dlistint_t *next; /*pointeur vers le prochain noeud */

	/* parcours la liste tant que le noeud != NULL */
	while (current != NULL)
	{
		next = current->next; /*save pointeur vers le prochain noeud*/
		free(current);
		current = next; /*Deplace vers le prochain noeud*/
	}
}
