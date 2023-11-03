#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie les nombres passés
 * @argc: nombre d'arguments
 * @argv: arguments passés au programme
 *
 * Description: multiplie les nombres passés en argument
 * Return: 0 ou 1
 */

int main(int argc, char *argv[])
{
	int nombre1;
	int nombre2;
	int produit;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		nombre1 = atoi(argv[1]);
		nombre2 = atoi(argv[2]);
		produit = nombre1 * nombre2;

		printf("%d\n", produit);
		return (0);
	}
}
