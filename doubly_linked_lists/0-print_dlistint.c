#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - imprime tous les éléments 'une liste dlistint_t
 * @h: pointeur vers la liste
 *
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
