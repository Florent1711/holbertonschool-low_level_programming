#include "main.h"

/**
 * swap_int - fonction qui inverse les valeurs de 2 variables
 * @a: 1ere variable
 * @b: 2e variable
 *
 * Description: inverse les valeurs de deux entiers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
