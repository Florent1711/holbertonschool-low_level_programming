#include "main.h"
#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - affiche un nom
 * @name: nom à afficher
 * @f: pourquoi c'est ça qui imprime le nom ?
 * Return: Null si nom ou f est null ?
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
