#include "main.h"

void print_rev(char *s)
{
	int compte;
	int i;
	int r;

	for (i = 0; s[i] != '\0'; i++)
	{
		compte++;
	}

	for (r = (compte - 1); r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
