#include <stdlib.h>
#include <stdio.h>

void print_opcodes(int num_bytes);

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc < 2)
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

	print_opcodes(num_bytes);
	return (0);
}

/**
 * print_opcodes - takes the number of bytes as an argument
 * @num_bytes: counts bytes
 * Return: nothing
 */

void print_opcodes(int num_bytes)
{
	int i;
	void *main_address = __builtin_return_address(0);

	unsigned char *opcodes = (unsigned char *)main_address;

	for (i = 0; i < num_bytes; i++)
		printf("%02x ", opcodes[i]);

	printf("\n");
}
