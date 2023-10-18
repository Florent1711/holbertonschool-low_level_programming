#include "main.h"

/**
 * jack_bauer - principal
 *
 * Description: fonction qui écrit chaque minute d'une journée
 *
 *
 */

void jack_bauer(void)
{
	int heures;
	int minutes;

	for (heures = 0; heures <= 23; heures++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((heures / 10) + '0');
			_putchar((heures % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}

}
