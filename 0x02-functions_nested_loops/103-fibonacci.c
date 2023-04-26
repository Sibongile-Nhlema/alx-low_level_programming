#include <stdio.h>
/**
 * main- prints sum of even fib numbers
 * less than 4 mil
 * Return: Always 0
 */
int main(void)
{
	unsigned int limit = 4000000;
	unsigned int fib2 = 0;
	unsigned int fib4 = 1;
	unsigned int fib6;
	unsigned int sum = 0;
	
	while (fib4 < limit)
	{
		fib6 = fib2 + fib4;
		fib2 = fib4;
		fib4 = fib6;
			if (fib4 % 2 == 0)
			{
				sum += fib4;
			}
	}
	printf("%d\n", sum);
	return (0);
}
