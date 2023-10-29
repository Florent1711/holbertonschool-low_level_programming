#include "main.h"

/**
 * _strchr - localise un caractère dans une chaîne de caractères
 * @s: pointeur vers s
 * @c: caractère
 *
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}
