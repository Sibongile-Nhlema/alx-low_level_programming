#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int i;
#define N 50
	long long int fib[N];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < N; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < N; i++)
	{
		printf("%lld", fib[i]);
		if (i < N - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
