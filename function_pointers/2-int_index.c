#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - recherche un nombre entier
 * @array: table
 * @size: taille de la table
 * @cmp: pointeur vers la table
 *
 * Return: -1 ou i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
