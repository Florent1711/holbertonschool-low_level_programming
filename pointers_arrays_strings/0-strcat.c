#include "main.h"

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
