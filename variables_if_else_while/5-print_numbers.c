#include <stdio.h>

/**
 * main - entry point
 *
 * Description: "affiche tous les chiffres en base 10 à partir de 0
 *
 * return: always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 48; x <= 57; x++)
	{
		putchar (x);
	}
	putchar ('\n');

	return (0);
}
