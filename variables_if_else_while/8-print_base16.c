#include <stdio.h>

/**
 * main -Point d'entrée
 *
 * Description: 'Affiche l'alphabet à l'envers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int chiffre = '0';
	char lettre = 'a';

	while (chiffre <= '9')
	{
		putchar(chiffre);
		chiffre++;
	}

	while (lettre <= 'f')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');
	return (0);
}
