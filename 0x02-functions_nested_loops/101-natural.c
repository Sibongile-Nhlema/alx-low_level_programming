#include <stdio.h>
/**
 *main - entry
 *Return: multiples of 3 and 5 until 1024
 */
int main(void)
{
	int i;

	for (i = 1; i < 1024; i++)
	{
		int sum = i;

		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
