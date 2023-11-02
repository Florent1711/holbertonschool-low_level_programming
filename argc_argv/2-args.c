#include <stdio.h>

/**
 * main - Imprime tous les arguments qu'il reçoit
 * @argc: nombre de valeurs
 * @argv: valeurs passées au programme
 *
 * Description: Affiche les arguments passés
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
