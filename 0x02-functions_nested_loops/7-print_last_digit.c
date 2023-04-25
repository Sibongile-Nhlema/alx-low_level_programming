#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 *@n: number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	char c = ld + '0';

	write(1, &c, 1);

	return (0);
}
