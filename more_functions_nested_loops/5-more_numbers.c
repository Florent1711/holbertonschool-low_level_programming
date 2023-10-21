#include "main.h"

/**
 * more_numbers - principal
 *
 * Description: affiche les nombres de 0 à 14 (x10)
 */

void more_numbers(void)
{
	int iterations;
	int nombres;

	for (iterations = 0; iterations < 10; iterations++)
	{

		for (nombres = 0; nombres <= 14; nombres++)
		{
			if (nombres > 9)
			{
				_putchar((nombres / 10) + '0');
			}
			_putchar((nombres % 10) + '0');
		}
		_putchar('\n');
	}
}
