#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - affiche des chaines de caractères
 * @separator: séparateur
 * @n: nombre de chaine
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		/* si la chaine est NULL, on imprime "(nil") */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

/* si le separateur est différent de NULL et */
		/* qu'on n'est pas à la dernière chaine; impime le séparateur */
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
