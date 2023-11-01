#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - imprime la somme des 2 diagonales d'un tableau d'entiers.
 * @a: nom du tableau
 * @size: taille du tableau
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int somme1 = 0;
	int somme2 = 0;

	while (i <= (size * size))
	{
		somme1 = somme1 + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		somme2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", somme1, somme2);
}

