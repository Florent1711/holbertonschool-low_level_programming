#include "main.h"

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);

			n++;
			
			if (n != 99);
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar('n');
			n--;
			if (n != 97)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('n');
	}
	_putchar('\n');
}
