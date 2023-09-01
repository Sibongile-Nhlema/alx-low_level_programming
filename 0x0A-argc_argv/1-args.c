#include "main.h"
#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: argument count
 * @argv: agrument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1); /* exclude program name */

	return (0);
}
