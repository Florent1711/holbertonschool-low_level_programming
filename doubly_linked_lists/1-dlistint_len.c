#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - renvoie le nombre d'éléments d'une liste dlistint_t
 * @h: pointeur vers la liste
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
