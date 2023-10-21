#include "main.h"

void print_square(int size)
{
	int y;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');

			for (x = 2; x <= size; x++)
			{
				_putchar('#');
			}
		}
	}
}
