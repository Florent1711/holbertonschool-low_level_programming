#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	/* type d'argument itératifs */
	void print_char(va_list arg)
	{
		char lettre;
		/* récupère un argument */
		lettre = va_arg(arg, int);

		printf("%c", lettre);
	}

	
