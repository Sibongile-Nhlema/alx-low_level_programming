#include <stdio.h>
/**
 * main - prints all possible combinations of single-didgit numbers.
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 38; num < 48; num++)
	{
		putchar(num);
		if (num != 47)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
