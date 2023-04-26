#include "main.h"
#include <stdio.h>
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: number
 *Return: return n if n>15, n<0. else nothing
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	for (int i =0; i <= n; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			printf("%d  ", i*j);
		}
	}
}
