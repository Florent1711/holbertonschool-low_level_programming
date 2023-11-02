#include <stdio.h>

/**
 * main - affiche le nom de son propre executable
 * @argc: nombre d'arguments
 * @argv: table d'arguments
 *
 * Return: 0 (Always success)
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
