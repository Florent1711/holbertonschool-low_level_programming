#include <stdio.h>
#include <stdlib.h>

/**
 * main - programme qui additionne les nombres
 * @argc: nombre d'arguments
 * @argv: arguments passés
 *
 * Return: 1 ou 0
 */

int main(int argc, char *argv[])
{
	int nb1;
	int nb2;
	int somme;

	somme = 0;

	for (nb1 = 1; nb1 < argc; nb1++)
	{
		for (nb2 = 0; argv[nb1][nb2] != '\0'; nb2++)
		{
			if (argv[nb1][nb2] < '0' || argv[nb1][nb2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		somme = somme + atoi(argv[nb1]);
	}
	printf("%d\n", somme);
	return (0);
}
