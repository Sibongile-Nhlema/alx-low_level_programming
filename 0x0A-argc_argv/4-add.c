#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;
	char *num;

	if (argc == 1) /* no arguments given*/
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++) /*check if symbol && || negative*/
	{
		num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num);

	}
	printf("%d\n", sum);
	return (0);
}
