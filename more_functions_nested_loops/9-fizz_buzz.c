#include <stdio.h>

int main(void)
{
	int nombre;

	for (nombre = 1; nombre <= 100; nombre ++)
	{
		if (nombre % 3 == 0)
			printf("Fizz ");

		else if (nombre % 5 == 0)
			printf("Buzz ");

		else if (nombre % 3 == 0 && nombre % 5 == 0)
			printf("FizzBuzz ");

		else
			printf("%d ", nombre);
	}
	putchar('\n');
	return (0);
}
