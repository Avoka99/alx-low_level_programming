#include<stdio.h>

/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base16;

	for (base16 = 0; base16 < 10; base16++)
	{
		putchar('0' + base16);
	}
	for (base16 = 0; base16 < 6; base16++)
	{
		putchar('a' + base16);
	}
	putchar('\n');

	return (0);
}
