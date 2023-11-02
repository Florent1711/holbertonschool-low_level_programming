#include <stdio.h>

/**
 * main - affiche le nombre d'arguments
 * @argc: nombre d'arguments
 * @argv: arguments passés
 *
 * Description: affiche le nombre d'arguments
 * Return: always 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
