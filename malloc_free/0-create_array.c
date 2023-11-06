#include "main.h"
#include <stdlib.h>

/**
 * create_array - fction crée un tableau +initialise avec un car. spécifique
 * @size: taille du tableau
 * @c: caractère
 *
 * Return: 0 ou str
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
