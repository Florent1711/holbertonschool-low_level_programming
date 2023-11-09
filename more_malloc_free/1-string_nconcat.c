#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - fonction qui concatène deux chaines
 * @s1: chaine1
 * @s2: chaine2
 * @n: longueur de chaine
 *
 * Return: 0 ou ret
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int longueur1, longueur2, i;
	char *ptr, *ret;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (longueur1 = 0, ptr = s1; *ptr; ptr++)
		longueur1++;

	for (longueur2 = 0, ptr = s2; *ptr; ptr++)
		longueur2++;

	if (n > longueur2)
		n = longueur2;

	ret = malloc((longueur1 + n + 1) * sizeof(char));

	if (!ret)
		return (0);

	ptr = ret;

	while (*s1)
		*ptr++ = *s1++;
	i = 0;

	while (i < n)
	{
		*ptr++ = s2[i++];
	}
	*ptr = 0;

	return (ret);
}
