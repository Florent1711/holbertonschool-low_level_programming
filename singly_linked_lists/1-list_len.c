#include "lists.h"

/**
 * list_len - retourne le nombre d'éléments d'une liste linkée list_t
 * @h: pointeur vers la liste
 *
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	/*init. d'un pointeur "current" à la tête de la liste chainée */
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
