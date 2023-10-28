#include "main.h"

char *leet(char *s)
{
	int i;
	int x;

	int cherche[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int remplace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (s[i] == cherche[x])
			{
				s[i] = remplace[x / 2];
				x = 9;
			}
		}
	}
	return (s);
}
