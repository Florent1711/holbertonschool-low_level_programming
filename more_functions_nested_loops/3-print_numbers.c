#include "main.h"

/**
 * print_numbers - principal
 *
 * Description: affiche les nombres de 0 à 9
 */

void print_numbers(void)
{
	int chiffre;

	for (chiffre = '0'; chiffre <= '9'; chiffre++)
	{
		_putchar(chiffre);
	}

	_putchar('\n');
}
