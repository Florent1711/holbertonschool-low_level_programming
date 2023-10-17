#include "main.h"

/**
 * print_sign - principal
 *
 * @n: variable qui renvoie 0, 1 ou -1
 *
 * Description: 1 si sup à 0; 0 si 0, -1 si inf à 0
 *
 * Return: 1, -1 ou 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
