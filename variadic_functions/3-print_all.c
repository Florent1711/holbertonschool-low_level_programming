#include "variadic_functions.h"
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	void print_char(va_list arg)
	{
		char lettre;

		lettre = va_arg(arg, int);

		printf("%c", lettre);
	}
}
