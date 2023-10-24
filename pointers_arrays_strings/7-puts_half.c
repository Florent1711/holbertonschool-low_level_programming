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

	index = 0;
	while (str[index] != '\0')
		index++;

	moitie = index / 2;

	while (moitie < index)
	{
		_putchar(str[moitie]);
		moitie++;
	}
	_putchar('\n');
}
