#include "main.h"

/**
 * _memset - fonction qui remplit la mémoire avec un octet constant.
 * @s: pointeur vers la zone à remplir
 * @b: octet constant
 * @n: octets en mémoire à remplir
 *
 * Description: remplit une zone mémoire avec un octet constant
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
