#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execute une fonction  sur chaque élément d'un tableau
 * @size: taille du tableau
 * @array: tableau
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
