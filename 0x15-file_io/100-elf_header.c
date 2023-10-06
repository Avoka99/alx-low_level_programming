#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"

/**
 * print_elf_header_info - Prints information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:   %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:    %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:    %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : "UNKNOWN");
	printf("  Entry point address: 0x%lx\n", header->e_entry);
}
/**
 * main - Displays information contained in the ELF header of an ELF file.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 * 
 * Return: 0 on success, or 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		return (98);
	}

	Elf64_Ehdr header;
	bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read == -1 || bytes_read != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Unable to read ELF header\n");
		close(fd);
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}
