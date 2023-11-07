#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - renvoie un pointeur vers 1 espace alloué qui contient copie du str
 * @str: chaine à copier
 *
 * Return: Null ou dbl
 */

char *_strdup(char *str)
{
	char *dbl;
	int index;
	int leng;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		leng++;
	}
	dbl = malloc(sizeof(char) * (leng + 1));

	if (dbl == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		dbl[index] = str[index];
	}

	dbl[leng] = '\0';
	return (dbl);
}
