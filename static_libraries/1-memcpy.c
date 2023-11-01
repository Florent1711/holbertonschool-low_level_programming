#include "main.h"

/**
 * _memcpy - fonction qui copie une zone de mémoire.
 * @dest: pointeur vers dest
 * @src: pointeur vers src
 * @n: longueur à copier
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
