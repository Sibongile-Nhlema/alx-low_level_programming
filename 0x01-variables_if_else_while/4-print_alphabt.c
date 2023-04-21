#include <stdio.h>
/**
 * main- prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n')
}
