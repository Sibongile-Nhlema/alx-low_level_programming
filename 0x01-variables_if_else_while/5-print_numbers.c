#include <stdio.h>
/**
 * main - prints single digit numbers of base 10 from 0, followed by a /n.
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
