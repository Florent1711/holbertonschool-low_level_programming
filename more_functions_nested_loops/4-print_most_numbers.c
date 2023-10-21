#include "main.h"

/**
 * print_most_numbers - Principal
 *
 *  Description: affiche les nombres de 0 à 9, sans 2 et 4
 */


void print_most_numbers(void)
{
	int chiffre;

	for (chiffre = '0'; chiffre <= '9'; chiffre++)
	{
		if (chiffre == '2' || chiffre == '4')
			continue;
		else
			_putchar(chiffre);
	}
	_putchar('\n');
}
