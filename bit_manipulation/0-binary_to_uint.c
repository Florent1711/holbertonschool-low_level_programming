#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - convertit en int non signé
 * @b: pointeur vers une chaine de 0 et 1 caractères
 *
 * Return: 0 ou nbre converti
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result <<= 1;
			result += b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (result);
}
