#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void display_error(char *msg);
void display_elf_header_info(Elf64_Ehdr *header);

/**
 * display_error - displays error
 * @msg: message
 * Return: nothing
 */

void display_error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * display_else_header_info - displays info
 * @header: header file
 * Return: nothing
 */

void display_elf_header_info(Elf64_Ehdr *header) 
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	
	printf("\n");
	printf("  Class:                             %s\n", 
			header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", 
			header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", 
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", 
			header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - Other");
	printf("  ABI Version:                       %d\n", 
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", 
			header->e_type == ET_NONE ? "NONE (None)" :
			header->e_type == ET_REL ? "REL (Relocatable file)" : 
			header->e_type == ET_EXEC ? "EXEC (Executable file)" :
			header->e_type == ET_DYN ? "DYN (Shared object file)" :
			header->e_type == ET_CORE ? "CORE (Core file)" :
			"unknown");
	printf("  Entry point address:               %lx\n", header->e_entry);
}

/**
 * main - entry point
 * @argc: argument
 * @argv: argument
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}
	
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		display_error("Error: Cannot open file");
	}
	
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		display_error("Error: Cannot read ELF header");
	}
	
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		display_error("Error: Not an ELF file");
	}
	
	display_elf_header_info(&header);
	
	close(fd);
	return (0);
}
