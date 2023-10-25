#include "main.h"

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
