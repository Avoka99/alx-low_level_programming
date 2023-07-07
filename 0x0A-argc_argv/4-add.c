#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks string
 * @s: array string
 *
 * Return: Always 0
 */
int check_num(char *s)
{
	unsigned int j;

	j = 0;
	while (j < strlen(s))

	{
		if (!isdigit(s[j]))
		{
			return (0);
		}
		j++;
	}
	return (1);
}

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Aways 0
 */
int main(int argc, char *argv[])
{
	int j, st, sum = 0;

	j = 1;
	while (j < argc)
	{
		if (check_num(argv[j]))
		{
			st = atoi(argv[j]);
			sum += st;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	printf("%d\n", sum);
	return (0);
}
