#include "main.h"

/**
 * _pow_recursion - fonction quin retourne la valeur de x exposant y
 * @x: nombre de base
 * @y: nombre exposant
 *
 * Return: -1, 1 ou x à la puissance y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
