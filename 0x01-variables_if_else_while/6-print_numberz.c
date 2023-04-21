#include <stdio.h>
/**
 * main- prints all single digits of base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
			putchar('\n');
			return (0);
}
