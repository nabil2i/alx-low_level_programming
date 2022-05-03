#include "main.h"

/**
 * main - displays the information contained in the
 * ELF header at the start of an ELF file
 * @argc: argument count
 * @argv: argument values
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

}
