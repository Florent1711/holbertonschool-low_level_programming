#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - fonction qui inverse une chaine
 * @s: chaine à inverser
 *
 * Description: inverse une chaine de caractère
 */

void print_rev(char *s)
{
	int longueur;
	int index;

	longueur = _strlen(s);

	for (index = longueur - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
