#include "main.h"

/**
 *_strncat - fonction qui concatène 2 chaines
 * @dest: chaine de destination
 * @src: chaine source
 * @n: comparaison de l'index
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int dest_longueur;

	index = 0;
	dest_longueur = 0;

	while (dest[index++])
		dest_longueur++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_longueur++] = src[index];

	return (dest);
}
