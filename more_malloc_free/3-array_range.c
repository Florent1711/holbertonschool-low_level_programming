#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - fonction qui créé un tableau d'entiers
 * @min: entrée mini
 * @max: entrée max
 *
 * Return: Null ou tab
 */

int *array_range(int min, int max)
{
	int *tab;
	int i;
	int longueur;

	if (min > max)
		return (NULL);

	for (longueur = 0; longueur < (max - min); longueur++)
		;

	tab = malloc(sizeof(int) * (longueur + 1));
	if (tab == NULL)
		return (NULL);

	for (i = 0; i <= longueur; i++)
	{
		tab[i] = min++;
	}
	return (tab);
}
