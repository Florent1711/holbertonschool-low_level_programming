#include "main.h"

/**
 * _strcpy - copie une chaine de caractères
 * @dest: destination de la copie
 * @src: source de la copie
 *
 * Description: copie la chaine de caractères pointée par src
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int increment;

	while (*(src + increment) != '\0')
	{
		*(dest + increment) = *(src + increment);
		increment++;
	}

	*(dest + increment) = '\0';

	return (dest);
}
