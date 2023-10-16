#include <stdio.h>

/**
 * main -entry point
 *
 * Description: 'Affiche l'alphabet sans e et q
 *
 * Return: 0 always success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{

		if (letter != 'e' && letter != 'q')
			putchar (letter);
	}

	putchar ('\n');

	return (0);
}
