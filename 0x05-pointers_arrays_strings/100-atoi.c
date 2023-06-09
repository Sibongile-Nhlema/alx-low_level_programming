#include "main.h"
#include <stddef.h>
/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: Always 0
 */

int _atoi(char *s)
{
	signed int sign = 1;
	signed int num = 0;
	signed int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] == '+')
		{
			sign = 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
		i++;
	}
	return (num * sign);
}
