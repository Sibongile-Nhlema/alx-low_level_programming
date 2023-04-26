#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count = 2;
	unsigned int fib1 = 1, fib2 = 2;
	unsigned int ans = fib1 + fib2;

	printf("%d, ", fib1);
	printf("%d, ", fib2);
	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%d\n", ans);
		}
		else
		{
			printf("%d, ", ans);
		}
		fib1 = fib2;
		fib2 = ans;
		ans = fib1 + fib2;
		count++;
	}
	return (0);
}
