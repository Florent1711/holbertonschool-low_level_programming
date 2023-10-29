#include "main.h"

/**
 * _strpbrk - recherche dans chaîne caractères l'un des octets d'un ensemble
 * @s: chaine à chercher
 * @accept: octet à chercher
 *
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (0);
}
