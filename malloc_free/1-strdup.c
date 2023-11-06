#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - renvoie un pointeur vers 1 espace alloué qui contient copie du str
 * @str: chaine à copier
 *
 * Return: Null ou new_str
 */

char *_strdup(char *str)
{
	char *new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);

	}
	strcpy(new_str, str);
	return (new_str);
}
