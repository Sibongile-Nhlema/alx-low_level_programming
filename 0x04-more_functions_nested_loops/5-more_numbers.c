#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int i = 0, num;

	while (i < 10)
	{
		num = 0;

		while (num <= 14)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		i++;
	}
}
