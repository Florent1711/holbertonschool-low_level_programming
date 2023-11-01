#include "main.h"

/**
 * _strcat - fonction qui concatène deux chaines de caractères
 * @dest: chaine de destination
 * @src: chaine source
 *
 * Return: resultat de la concaténation
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int destlongueur;

	index = 0;
	destlongueur = 0;

	while (dest[index++])
		destlongueur++;

	for (index = 0; src[index]; index++)
		dest[destlongueur++] = src[index];

	return (dest);
}
