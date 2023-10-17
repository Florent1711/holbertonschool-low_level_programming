#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: affiche l'alphabet 10 fois
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int compte;
	char lettre;

	for (compte = 0; compte <= 9; compte++)
	{
		for (lettre = 'a'; lettre <= 'z'; lettre++)
		{
			_putchar (lettre);
		}
		_putchar('\n');
	}

}
