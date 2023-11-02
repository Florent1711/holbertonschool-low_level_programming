#include <stdio.h>

/**
 * main - affiche le nombre d'arguments
 * @argc: nombre d'arguments
 * @argv: arguments passés
 *
 * Description: affiche le nombre d'arguments
 * Return: always 0 (success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
