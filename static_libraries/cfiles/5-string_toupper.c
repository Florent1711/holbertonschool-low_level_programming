#include "main.h"

/**
 * string_toupper - fonction qui transforme les lettres min. en maj.
 * @p: chaine à transformer
 *
 * Description: transforme les bas de casse en majuscules
 *
 * Return: la chaine transformée
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] = p[i] - 32;
	}
	return (p);
}
