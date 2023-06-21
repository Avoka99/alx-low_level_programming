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
	long long f1, f2, f_next;

	printf("%lld, %lld", f1, f2);

	for (i = 3; i <= 50; i++)
	{
		fib_next = f1 + f2;
		printf(", %lld", f_next);

		f1 = f2;
		f2 = f_next;

	}

	printf("\n");

	return (0);

}
