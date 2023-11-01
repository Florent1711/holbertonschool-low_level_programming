#include "main.h"

/**
 * puts2 - fonction qui affiche les nombres pairs
 *
 * @str: chaine à traiter
 * Description: affiche les chiffres impairs d'une chaine
 */

void puts2(char *str)
{
	int i;
	int n;

	n = 0;

	while (str[n] != '\0')
		n++;

			for (i = 0; i < n; i += 2)
			_putchar(str[i]);

	_putchar('\n');
}
