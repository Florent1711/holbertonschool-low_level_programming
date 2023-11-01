#include "main.h"

/**
 * _strcpy - copie une chaine de caractères
 * @dest: destination de la copie
 * @src: source de la copie
 *
 * Description: copie la chaine de caractères pointée par src
 *
 * Return: str
 */

char *_strcpy(char *dest, char *src)
{
	char *str = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}
