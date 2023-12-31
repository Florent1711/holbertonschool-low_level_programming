#include "main.h"

/**
 * print_last_digit - principal
 *
 * @n: variable qui renvoie lst_dgt
 *
 * Description: renvoie le dernier chiffre
 *
 * Return: lst_dgt
 */

int print_last_digit(int n)
{
	int lst_dgt;

	if (n < 0)
	{
		lst_dgt = (-1 * (n % 10));
		_putchar(lst_dgt + '0');
		return (lst_dgt);
	}

	else
	{
		lst_dgt = (n % 10);
		_putchar(lst_dgt + '0');
		return (lst_dgt);
	}
}
