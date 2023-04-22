#include <stdio.h>
/**
 * main - prints all possible combinations of two digit numbers.
 * Return: Always 0
 */
int main(void)
{
        int num;

        for (num = 18; num < 28; num++)
        {
                putchar(num);
                if (num != 1:7)
                {
                        putchar(',');
                        putchar(' ');
                }
        }
                putchar('\n');
                return (0);
}
