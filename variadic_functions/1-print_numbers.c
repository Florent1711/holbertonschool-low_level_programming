#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - imprime des nombres
 * @separator: virgule
 * @n: nombres
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
