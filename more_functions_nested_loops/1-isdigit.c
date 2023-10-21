#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: Write a function that checks for digit.
 *
 * @c: valeur retournée
 *
 * Return: 1 ou 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
