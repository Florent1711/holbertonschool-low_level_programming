#include "main.h"



void print_to_98(int n)
{
	int i, j, k, d;

	for (i = n; i <= 98; i++)
	{
		if (i < 0)
		{
			_putchar('-');
			i = -i;
		}

		j = i;
		d = 0;
		while (j > 0)
		{
			j /= 10;
			d++;
		}

		j = i;
		while (d > 0)
		{

			k = 1;
			while (d > 1)
			{
				k *= 10;
				d--;
			}

			_putchar((j / k) + '0');
			j %= k;
		}

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}

		if (i < 0)
		{
			i = -i;
		}
	}

	_putchar('\n');
}
