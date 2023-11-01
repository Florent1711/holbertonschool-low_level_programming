#include "main.h"

/**
 * _puts - fonction qui affiche une chaine de caractères
 * @str : chaine à afficher
 *
 * Description: Affiche une chaine de caractère
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
