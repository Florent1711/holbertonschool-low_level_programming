#include "main.h"

/**
 * _strlen - renvoie la longueur d'une chaine de caractères
 * @s: chaine de caractères
 *
 * Description: retourne la longuer d'une chaine de caractères
 *
 * Return: longueur de la chaine
 */

int _strlen(char *s)
{
	int compte;
	int increment;

	increment = 0;

	for (compte = 0; s[compte] != '\0'; compte++)
		increment++;

	return (increment);
}
