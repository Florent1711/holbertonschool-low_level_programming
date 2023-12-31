#include "main.h"

/**
 * _strncpy - fonction qui copie une chaine de caractères
 * @dest: destination de la chaine
 * @src: source de la chaine
 * @n: comparaison
 *
 * Description : copie une chaine de caractères
 * Return: la chaine copiée
 */

char *_strncpy(char *dest, char *src, int n)
{
	int compte;

	for (compte = 0; compte < n && src[compte] != '\0'; compte++)
		dest[compte] = src[compte];

	for ( ; compte < n; compte++)
		dest[compte] = '\0';

	return (dest);
}
