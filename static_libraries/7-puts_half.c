#include "main.h"

/**
 * puts_half - affiche la 2e moitié d'un string
 * @str: chaine de caractère
 *
 * Description: fonction qui affiche le 2e moitié d'une chaine caractères
 */

void puts_half(char *str)
{

	int index;
	int moitie;
	int leng;

	leng = 0;

	for (index = 0; str[index] != '\0'; index++)
		leng++;

	moitie = (leng / 2);

	if ((leng % 2) == 1)
		moitie = ((leng + 1) / 2);

	for (index = moitie; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
