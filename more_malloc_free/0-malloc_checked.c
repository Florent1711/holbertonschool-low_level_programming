#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *malloc_checked - alloue de la mémoire à l'aide de malloc
 * @b: variable
 *
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
