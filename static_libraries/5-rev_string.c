#include "main.h"

/**
 * rev_string - fonction qui inverse une chaine de caractères
 * @s: chaine de caractère
 *
 * Description: inverse une chaine de caractères
 */

void rev_string(char *s)
{
	int longueur;
	int recul;
	int temp;

	longueur = 0;
	recul = 0;

	while (s[recul++])
		longueur++;

	for (recul = longueur - 1; recul >= longueur / 2; recul--)
	{
		temp = s[recul];
		s[recul] = s[longueur - recul - 1];
		s[longueur - recul - 1] = temp;
	}
}
