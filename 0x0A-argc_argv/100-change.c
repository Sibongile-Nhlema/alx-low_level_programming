#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int countCoins(int num);

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
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	coins = countCoins(num);

	printf("%d\n", coins);
	return (0);
}

/**
 * countCoins - counts coins
 * @num: given number
 *
 * Return: number of coins
 */

int countCoins(int num)
{
	int money[] = {25, 10, 5, 2, 1};
	int coins = sizeof(money) / sizeof(money[0]);
	int result = 0;
	int i;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < coins; i++)
	{
		while (num >= money[i])
		{
			result++;
			num -= money[i];
		}
	}
	return (result);
}
