#include "main.h"

/**
 * times_table - principal
 *
 * Description: fonction qui affiche la table de 9
 *
 */

void times_table(void)
{
	int nombre1;
	int nombre2;

	for (nombre1 = 0; nombre1 <= 9; nombre1++)
	{
		for (nombre2 = 0; nombre2 <= 9; nombre2++)
		{
			int produit;

			produit = nombre1 * nombre2;

			if (nombre2 == 0)
				_putchar('0');

			else if (produit <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(produit + '0');
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(produit / 10 + '0');
				_putchar(produit % 10 + '0');
			}
		}
		_putchar ('\n');
	}
}
