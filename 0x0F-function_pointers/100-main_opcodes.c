#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int bytes, i = 0;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	while (i < bytes)
	{
		printf("%02hhx", array[i]);

		if (i == bytes - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
		i++;
	}
	return (0);
}
