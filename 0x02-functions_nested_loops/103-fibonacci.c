#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Calculates and prints the sum of even-valued terms
 *              in the Fibonacci sequence up to 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, f_next = f2, sum = 2;

	while (f_next <= 4000000)
	{
		f_next = f1 + f2;
		if (f_next % 2 == 0)
			sum += f_next;

		f1 = f2;
		f2 = f_next;
	}

	printf("%lu\n", sum);

	return (0);
}
