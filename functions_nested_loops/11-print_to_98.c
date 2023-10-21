#include "main.h"

/* code fournie par l'IA de bing pour étude */

void print_to_98(int n)
{
	int i, j, k, d;

	/* Loop from n to 98 and print each number */
	for (i = n; i <= 98; i++)
	{
		/* Check if the number is negative */
		if (i < 0)
		{
			/* Print the minus sign */
			putchar('-');

			/* Convert the number to positive */
			i = -i;
		}

		/* Find the number of digits in the number */
		j = i;
		d = 0;
		while (j > 0)
		{
			j /= 10;
			d++;
		}

		/* Print each digit using putchar */
		j = i;
		while (d > 0)
		{
			/* Find the power of 10 for the current digit */
			k = 1;
			while (d > 1)
			{
				k *= 10;
				d--;
			}

			/* Print the current digit */
			putchar((j / k) + '0');

			/* Remove the current digit from the number */
			j %= k;
		}

		/* Print a comma and a space after each number except 98 */
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}

		/* Convert the number back to negative if it was negative */
		if (i < 0)
		{
			i = -i;
		}
	}

	/* Print a new line at the end */
	putchar('\n');
}
