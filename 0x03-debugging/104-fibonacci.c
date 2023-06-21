#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, num1 = 1, num2 = 2, temp;

	printf("%d, %d", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		temp = num1 + num2;
		printf(", %d", temp);
		num1 = num2;
		num2 = temp;
	}

	printf("\n");

	return 0;
}
