#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times
 */
void print_times_table(int n)
{
	int a, b;

	if (n < 0 || n > 15)

		return;


	for (a = 0; a <= 15; a++)
	{
		for (b = 0; b <= 15; b++)
		{
			int result = a * b;


			if (b == 0)

				printf("%2d", result);

			else

				printf(", %2d", result);

		}
		printf("\n");
	}
}
