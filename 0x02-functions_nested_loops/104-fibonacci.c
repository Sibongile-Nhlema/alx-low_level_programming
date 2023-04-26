#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count = 2;
	unsigned long long int fib1 = 1, fib2 = 2;
	unsigned long long int ans = fib1 + fib2;

	printf("%lu, ", fib1);
	printf("%lu, ", fib2);
	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%llu\n", ans);
		}
		else
		{
			printf("%llu, ", ans);
		}
		fib1 = fib2;
		fib2 = ans;
		ans = fib1 + fib2;
		count++;
	}
	return (0);
}
