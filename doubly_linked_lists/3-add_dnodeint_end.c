#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint_end - ajoute un nouveau noeud à la fin de dlistint_t
 * @head: double pointeur vers le noeud
 * @n: valeur du noeud à ajouter
 *
 * Return: NULL ou new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/* alloue la mémoire pour un nouveau noeud */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

/*intialise les champs du nouveau noeud*/
	new_node->n = n;
	new_node->next = NULL;

/* si liste vide, nouveau noeud ajouté comme 1er élément de la liste*/
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

/* Parcourt la liste au dernier noeud */
	{
		dlistint_t *last = *head;

		while (last->next != NULL)
			last = last->next;

/* Ajoute le nouveau noeud à la fin */
		last->next = new_node;
		new_node->prev = last;
	}
	return (new_node);
}
