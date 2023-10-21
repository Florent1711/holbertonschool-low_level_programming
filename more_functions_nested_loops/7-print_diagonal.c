#include "main.h"

/**
 * print_diagonal - Fonction
 * @n: position du caracère \
 *
 * Description: affiche une diagonale sur le terminal
 *
 */

void print_diagonal(int n)
{
	int y;
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 1; y <= n; y++)
		{
			for (x = 1; x < y; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
