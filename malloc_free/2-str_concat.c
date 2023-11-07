#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatène deux chaines
 * @s1: chaine 1
 * @s2: chaine 2
 *
 * Return: Null ou result
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 =0, j = 0, i = 0;
	char *result = malloc(len1 + len2 + 1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (result == NULL)
		return (NULL);

	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
