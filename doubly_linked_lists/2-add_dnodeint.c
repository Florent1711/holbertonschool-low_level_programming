#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint - ajoute un nouveau noeud au début d'une liste dlistint_t
 * @head: double pointeur vers 1er noeud
 * @n: valeur du nouveau noeud à ajouter
 *
 * Return: NULL ou new_node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* alloue la mémoire du nouveau noeud */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL) /* si l'alloc.mémoire échoue */
		return (NULL);

	/* init. les champs du nouveau noeud */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

/* si la liste n'est pas vide mettre à jourle champ prev du 1er noeud*/
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node; /* mise à jour la tête de la liste */
	return (new_node); /* renvoi l'adresse du nouveau noeud */
}
