#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: affiche l'alphabet
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar ('\n');

	/*return (0);*/
}
