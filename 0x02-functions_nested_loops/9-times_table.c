#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0.
 * Return: number
 */
void times_table(void)
{
	int multiplier;

	while (multiplier >= 0 && multiplier < 9)
	{
		int num;

		while (num >= 0)
		{
			int result = multiplier * num;

			_puthcar(result + '0');
			num++;
		}
		multiplier++;
	}
}
