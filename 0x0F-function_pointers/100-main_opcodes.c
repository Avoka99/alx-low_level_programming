#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcode = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcode[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}

