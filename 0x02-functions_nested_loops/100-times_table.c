#include "main.h"
#include <stdio.h>
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: number
 *Return: return n if n>15, n<0. else nothing
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int valur = i * j;

			printf("%4d", value);
		}
		printf("\n");
	}
}
