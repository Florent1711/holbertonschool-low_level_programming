#include "lists.h"

/**
 * add_node - ajoute un nouveau noeud au début de list_t
 * @str: chaine de caractères dupliquée
 * @head: double pointeur vers le 1er noeud de list_t
 *
 * Return: NULL ou new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
