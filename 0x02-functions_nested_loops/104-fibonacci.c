#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count = 2;
	long double fib1 = 1, fib2 = 2;
	long double ans = fib1 + fib2;

	printf("%.0LF, ", fib1);
	printf("%.0LF," fib2);
	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%.0LF\n", ans);
		}
		else
		{
			printf("%.0LF, ", ans);
		}
		fib1 = fib2;
		fib2 = ans;
		ans = fib1 + fib2;
		count++;
	}
	return (0);
}
