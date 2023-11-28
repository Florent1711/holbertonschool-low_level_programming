#include "lists.h"

/**
 * add_node_end - ajoute un nouveau noeud à la fin de list_t
 * @head: double pointeur
 * @str: chaine à ajouter
 *
 * Return: NULL ou new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}
	return (new_node);
}
