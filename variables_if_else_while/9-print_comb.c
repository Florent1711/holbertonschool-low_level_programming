#include <stdio.h>

/**
 * main -Point d'entrée
 *
 * Description: 'imprime les combinaisons possibles de nombres à un chiffre.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int chiffre = '0';

	while (chiffre <= '9')
	{
		putchar(chiffre);
		if (chiffre != '9')
		{
			putchar(',');
			putchar(' ');
		}
		chiffre++;
	}
	putchar('\n');
	return (0);
}
