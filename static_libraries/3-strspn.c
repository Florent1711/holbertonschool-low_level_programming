#include "main.h"

/**
 * _strspn - qui permet d'obtenir la longueur d'une sous-chaîne de préfixes.
 * @s: pointeur vers la chaine
 * @accept: pointeur vers verif de s
 *
 * Return: ce qui est accepté
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, compteur;

	/* Initialiser le compteur à zéro */
	compteur = 0;

	/* Parcourir la chaîne s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Parcourir la chaîne accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* Si car courant de s correspond à un car de accept */
			if (s[i] == accept[j])
			{
				/* ++ le compteur & sort de la boucle interne */
				compteur++;
				break;
			}
		}

		/* Si boucle interne terminée sans correspond, sort boucle ext*/
		if (accept[j] == '\0')
		{
			break;
		}
	}

	/* Retourner le compteur */
	return (compteur);
}
