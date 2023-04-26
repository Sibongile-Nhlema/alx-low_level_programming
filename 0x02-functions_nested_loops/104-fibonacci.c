#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count = 2;
	long int fib1 = 1, fib2 = 2;
	long int ans = fib1 + fib2;

	printf("%ld, ", fib1);
	printf("%ld," fib2);
	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%ld\n", ans);
		}
		else
		{
			printf("%ld, ", ans);
		}
		fib1 = fib2;
		fib2 = ans;
		ans = fib1 + fib2;
		count++;
	}
	return (0);
}
