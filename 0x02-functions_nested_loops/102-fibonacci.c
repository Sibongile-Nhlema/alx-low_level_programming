#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int i;
#define N 50
	int fib[N];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}

	for (i = 0;i < n; i++)
	{
		printf("%d", fib[i]);
		if (i < n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
