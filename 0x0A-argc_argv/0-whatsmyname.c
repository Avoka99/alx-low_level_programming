#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the name of the progamme
 * @argc: number of argumaents
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
