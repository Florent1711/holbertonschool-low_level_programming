#include "main.h"

/**
 * _isalpha - Principal
 *
 * @c: variable qui renvoie 0 ou 1
 *
 * Description: Si les caractères sont des lettres, affiche 1 else 0
 *
 * Return: 1 si c'est minuscule sinon 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
