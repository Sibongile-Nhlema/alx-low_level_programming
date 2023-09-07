#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"

void errors(void);
int _is_digit(char *s);
int _strlen(char *s);
void print_result(int *result, int len);
int *mul(char *num1, char *num2);

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int *result;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3)
		errors();

	if (!_is_digit(num1) && !_is_digit(num2))
		errors();

	result = mul(num1, num2);
	if (!result)
		return (1);

	print_result(result, _strlen(num1) + _strlen(num2) + 1);

	free(result);
	return (0);
}

/**
 * errors- handles errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _is_digit - checks if a string contains a non-digit char
 * @s: string
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int _is_digit(char *s)
{
	int j = 0;

	for (j = 0; s[j]; j++)
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
		length++;

	return (length);
}

/**
 * print_result - handle printing the result
 * @result: product of two numbers
 * @len: length of array
 * Return: noting
 */

void print_result(int *result, int len)
{
	int i, a = 0;

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}

	if (!a)
		_putchar('0');

	_putchar('\n');
}

/**
 * mul - handle the actual multiplication
 * @num1: 1st number
 * @num2: 2nd number
 * Return: product
 */

int *mul(char *num1, char *num2)
{
	int len1, len2, len, i, carry, digit1, digit2, *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (NULL);

	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = num1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	return (result);
}
