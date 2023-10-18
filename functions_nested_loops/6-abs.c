#include "main.h"

/**
 * _abs - principal
 *
 * @n: variable qui renvoie 0, 1 ou -1
 *
 * Description: fonction qui calcule la valeur absolue d'un entier
 *
 * Return: 1, -1
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
