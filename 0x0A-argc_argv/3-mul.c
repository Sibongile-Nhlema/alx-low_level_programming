#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to int
 * @s: string
 * Return: interger
 */

int _atoi(char *s)
{
	int n = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		s++;
	}

	return (sign * n);
}

/**
 * main -  multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 , or 1 if error
 */

int main(int argc, char *argv[])
{
	int num0, num1, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num0 = _atoi(argv[1]);
	num1 = _atoi(argv[2]);
	result = num0 * num1;

	printf("%d\n", result);
	return (0);
}
