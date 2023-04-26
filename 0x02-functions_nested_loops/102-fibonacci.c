#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count = 3;

	long int fib1 = 1, fib2 = 2;
	long int ans = fib1 + fib2;

	printf("%lu, ", fib1);
	printf("%lu, ", fib2);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu \n", ans);
		}
		else
		{
			printf("%lu, ", ans);
		}
		fib1 = fib2;
		fib2 = ans;
		ans = fib1 + fib2;
		count++;
	}
	return (0);
}
