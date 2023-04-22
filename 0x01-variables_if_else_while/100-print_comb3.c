#include <stdio.h>
/**
 * main - prints all possible combinations of two digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int num, num1;

	for (num = 0; num < 9; num++)
	{
		for (num1 = 0; num1 < 9; num1++)
		{
			putchar(num + '0');
			putchar(num1 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n')
	return (0);
}
