#include "main.h"
#include <stdio.h>

/**
 * print_array - affiche les éléments d'un tableau d'entiers
 * @a: les entiers
 * @n: taille des tableaux
 *
 * Description: affiche les éléments d'un tableau d'entiers
 */

void print_array(int *a, int n)
{
	int increment;

	for (increment = 0; increment < n; increment++)
	{
		if (increment != n - 1)
		{
			printf("%d, ", a[increment]);
		}

		else
		{
				printf("%d", a[increment]);
		}
	}
	printf("\n");
}
