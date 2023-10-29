#include "main.h"

/**
 * _strstr - fonction qui localise une sous-chaine
 * @haystack: Chaine dans laquelle chercher
 * @needle: chaine à rechercher
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s;

	s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
