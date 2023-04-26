#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: number
 *Return: return n if n>15, n<0. else nothing
 */
void print_times_table(int n)
{
        int n, num, prod;

        for (n = 0; n <= 15; n++)
        {
                _putchar('0');
                for (num = 1; num <= 9;  num++)
                {
                        _putchar(',');
                        _putchar(' ');

                        prod = n * num;

                        if (prod <= 9)
                                _putchar(' ');
                        else
                                _putchar((prod / 10) + '0');
                        _putchar((prod % 10) + '0');
                }
                _putchar('\n');
        }
}
