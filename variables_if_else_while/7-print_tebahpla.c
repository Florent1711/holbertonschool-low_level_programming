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
	char lettre = 'z';

	while (lettre >= 'a')
	{
		putchar (lettre);
		lettre--;
	}
	putchar('\n');
	return (0);
}
