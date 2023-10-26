#include "main.h"

/**
 * _strcmp - fonction qui compare deux chaines
 * @s1: pointeur vers la première chaine
 * @s2: pointeur vers la seconde chaine
 *
 * Return: Si une chaine est différente
 */

int _strcmp(char *s1, char *s2)
{
	int compte;
	int compare;

	compte = 0;

	while (s1[compte] == s2[compte] && s1[compte] != '\0')
	{
		compte++;
	}

	compare = s1[compte] -  s2[compte];
	return (compare);
}
