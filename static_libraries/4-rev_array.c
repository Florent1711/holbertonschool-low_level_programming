#include "main.h"

/**
 * reverse_array - fonction qui inverse le contenu d'un tableau d'entiers
 * @a: tableau à inverser
 * @n: taille du tableau
 *
 * Description: inverse le contenu d'un tableau d'entiers
 */

void reverse_array(int *a, int n)
{
	int temp;
	int compte;

	n = n - 1;
	compte = 0;
	while (compte <= n)
	{
		temp = a[compte];
		a[compte++] = a[n];
		a[n--] = temp;
	}
}
