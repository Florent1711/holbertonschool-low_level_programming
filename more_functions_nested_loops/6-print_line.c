#include "main.h"

/**
 * print_line - Principal
 * @n: nombre de _ à afficher
 *
 * Description: affiche un underscor tant que n n'est pas 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
