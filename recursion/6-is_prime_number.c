#include "main.h"

int numberPrime(int n, int i);

/**
 * is_prime_number - teste n
 * @n: nombre à tester
 *
 * Return: 0 ou numberPrime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (numberPrime(n, n - 1));
}

/**
 * numberPrime - teste si i est premier
 * @n: nombre à traiter
 * @i: itération
 *
 * Return: 0, 1 ou NumberPrime
 */


	int numberPrime(int n, int i)
	{
		if (i == 1)
			return (1);

		if (n % i == 0 && i > 0)
			return (0);

		return (numberPrime(n, i - 1));
	}
