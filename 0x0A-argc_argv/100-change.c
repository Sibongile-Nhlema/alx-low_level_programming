#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min num of coins for change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int num;
	int cents[] = {25, 0, 5, 2, 1};
	int coins;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = 0;
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	else if (num == 0)
	{
		printf("0\n");
		return (0);
	}


	for (i = 0; i < 5 && num >= 0; i++)
	{
		if (num >= cents[i])
		{
			coins += num / cents[i];
			num %= cents[i];
		}
	}

	printf("%d\n", coins);
	return (0);
}
