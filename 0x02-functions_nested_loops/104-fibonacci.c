#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int fib1 = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int fib2;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", fib1);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += fib1;
		fib1 = aft - fib1;
	}
	fib2 = (fib1 / l);
	bef2 = (fib1 % l);
	aft1 = (aft / l);
	aft2 = (aft % l);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 = aft1 + fib2;
		fib2 = aft1 - fib2;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
