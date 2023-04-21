#include <stdio.h>
/**
 * main - prints all no.s of base 16 in lowercase and new line
 * Return: Always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num > 10; num++)
		putchar(num + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');
	return (0);
}
