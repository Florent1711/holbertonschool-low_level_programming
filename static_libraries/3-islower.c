#include "main.h"

/**
 * _islower - Principal
 *
 * @c: variable qui renvoie 0 ou 1
 *
 * Description: Si les caractères sont en minuscules, affiche 1 else 0
 *
 * Return: 1 si c'est minuscule sinon 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
