#include <stdio.h>

/**
 * main - prints largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long largest = 0;
	long factor = 2;

	while (number % 2 == 0)
	{
		largest = 2;
		number /= 2;
	}

	while (factor * factor <= number)
	{
		if (number % factor == 0)
		{
			largest = factor;
			number /= factor;
		}
		else
		{
			factor += 2;
		}
	}

	if (number > 1)
		largest = number;

	printf("%ld\n", largest);

	return (0);
}
