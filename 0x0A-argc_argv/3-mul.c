#include "main.h"
#include <stdio.h>

int _atoi(char *s);

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on Error
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		result = num1 * num2;

		printf("%d\n", result);
		return (0);

	}
}

/**
 * _atoi - convert string to int
 * @s: string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int answer = 0;

	while (s[i] == ' ')
	{
		i++; /*handle whitespaces*/
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}/*handles signs*/

	while (s[i] >= '0' && s[i] <= '9')
	{
		answer = answer * 10 + (s[i++] - '0');
	}

	return (answer * sign);
}
