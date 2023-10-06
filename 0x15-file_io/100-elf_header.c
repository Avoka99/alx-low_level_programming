#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 *  * check_elf - Checks if the file is a valid ELF file.
 *   * @e_ident: The ELF identification bytes.
 *    */
void check_elf(unsigned char *e_ident);

/**
 *  * print_magic - Prints the ELF magic number.
 *   * @e_ident: The ELF identification bytes.
 *    */
void print_magic(unsigned char *e_ident);

/**
 *  * print_class - Prints the ELF class (32-bit or 64-bit).
 *   * @e_ident: The ELF identification bytes.
 *    */
void print_class(unsigned char *e_ident);

/**
 *  * print_data - Prints the ELF data encoding (little-endian or big-endian).
 *   * @e_ident: The ELF identification bytes.
 *    */
void print_data(unsigned char *e_ident);

/**
 *  * print_version - Prints the ELF version.
 *   * @e_ident: The ELF identification bytes.
 *    */
void print_version(unsigned char *e_ident);

/**
 *  * print_abi - Prints the ELF ABI (Application Binary Interface).
 *   * @e_ident: The ELF identification bytes.
 *    */
void print_abi(unsigned char *e_ident);

/**
 *  * print_osabi - Prints the ELF OS/ABI.
 *   * @e_ident: The ELF identification bytes.
 *    */
void print_osabi(unsigned char *e_ident);

/**
 *  * print_type - Prints the ELF type.
 *   * @e_type: The ELF type.
 *    * @e_ident: The ELF identification bytes.
 *     */
void print_type(unsigned int e_type, unsigned char *e_ident);

/**
 *  * print_entry - Prints the ELF entry point address.
 *   * @e_entry: The ELF entry point address.
 *    * @e_ident: The ELF identification bytes.
 *     */
void print_entry(unsigned long int e_entry, unsigned char *e_ident);

/**
 *  * close_elf - Closes the ELF file.
 *   * @elf: The file descriptor of the ELF file.
 *    */
void close_elf(int elf);
/**
 *  * main - Displays the information contained in the
 *   * ELF header at the start of an ELF file.
 *    * @argc: The number of arguments supplied to the program.
 *     * @argv: An array of pointers to the arguments.
 *      *
 *       * Return: 0 on success.
 *        */
int main(int __attribute__((__unused__)) argc, char *argv[]);

void print_error_and_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
			e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error_and_exit(98, "Error: Not an ELF file\n", "");
	}
}

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

void print_class(unsigned char *e_ident)
{
	printf("Class:   ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid class\n");
			break;
	}
}

void print_data(unsigned char *e_ident)
{
	printf("Data:    ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
			break;
	}
}

void print_version(unsigned char *e_ident)
{
	printf("Version: %d (current)\n", e_ident[EI_VERSION]);
}

void print_abi(unsigned char *e_ident)
{
	printf("OS/ABI:  ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		default:
			printf("Other ABI\n");
			break;
	}
}

void print_osabi(unsigned char *e_ident)
{
	printf("ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("Type:    ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE(None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("Entry point address: 0x%08lx\n", e_entry);
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("Entry point address: 0x%016lx\n", e_entry);
	}
}

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", elf);
		exit(98);
	}
}

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int elf, i;
	Elf64_Ehdr *elf_header;

	elf = open(argv[1], O_RDONLY);

	if (elf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (elf_header == NULL)
	{
		close_elf(elf);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	i = read(elf, elf_header, sizeof(Elf64_Ehdr));
	if (i == -1)
	{
		free(elf_header);
		close_elf(elf);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(elf_header->e_ident);
	printf("ELF Header:\n");
	print_magic(elf_header->e_ident);
	print_class(elf_header->e_ident);
	print_data(elf_header->e_ident);
	print_version(elf_header->e_ident);
	print_abi(elf_header->e_ident);
	print_osabi(elf_header->e_ident);
	print_type(elf_header->e_type, elf_header->e_ident);
	print_entry(elf_header->e_entry, elf_header->e_ident);

	free(elf_header);
	close_elf(elf);

	return (0);
}

