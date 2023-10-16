#include <stdio.h>

/**
 * main - entry point
 *
 * Description: "affiche tous les chiffres en base 10 à partir de 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar (n);
		n++;
	}
	putchar ('\n');

	return (0);
}
