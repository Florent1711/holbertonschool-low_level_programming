#include "main.h"

int addendum_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion -si le nbre est négatif, renvoie -1
 * @n : nombre à traiter
 *
 * Return: -1 sinon renvoie vers la fonction
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (addendum_sqrt_recursion(n, 0));
}

/**
 * addendum_sqrt_recursion - traite n et calcule sa racine
 * @n: nombre à traiter
 * @i: nombre renvoyé
 *
 * Return: -1, i ou resultat de la fonction
 */

int addendum_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (addendum_sqrt_recursion(n, i + 1));
}
