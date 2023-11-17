#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	/* code proposé par Bing IA */
    int i = 0;
    char *s;
    va_list args;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == 'c')
        {
            printf("%c", va_arg(args, int));
        }
        else if (format[i] == 'i')
        {
            printf("%d", va_arg(args, int));
        }
        else if (format[i] == 'f')
        {
            printf("%f", va_arg(args, double));
        }
        else if (format[i] == 's')
        {
            s = va_arg(args, char *);
            if (s == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", s);
            }
        }
        if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
                                      format[i] == 'f' || format[i] == 's'))
        {
            printf(", ");
        }
        i++;
    }
    printf("\n");
    va_end(args);
}
