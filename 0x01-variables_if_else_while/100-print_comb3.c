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
		for (num1 = num + 1; num1 < 10; num1++)
		{
			if (num1 != num)
			{
			putchar(num + '0');
			putchar(num1 + '0');
			if (num == 8 && num1 == 9)
			{
				continue;
			}
			}
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
