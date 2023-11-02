#include "main.h"

/**
 * _isupper - principal
 * @c: valeur retournée
 *
 * Description: 'Write a function that checks for uppercase character'
 *
 * Return: Always 0
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
