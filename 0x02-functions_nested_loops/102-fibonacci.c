#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long f1, f2, f_next;

	printf("%lu, %lu", f1, f2);

	for (i = 3; i <= 50; i++)
	{
		f_next = f1 + f2;
		printf(", %lu", f_next);

		f1 = f2;
		f2 = f_next;

	}

	printf("\n");

	return (0);

}
