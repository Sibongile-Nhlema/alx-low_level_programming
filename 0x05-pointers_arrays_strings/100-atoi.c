#include "main.h"
#include <stddef.h>
/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: Always 0
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	if (s[0] == '-') /*account for signs*/
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	/*convert str to int*/
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
		else if (s[i] == '-' || s[i] == '+')
		{
			/* ignores signed found at the end */
		}
		else
		{
			/* ignores non-digit characters */
		}
		i++;
	}
	return (sign * num);
}
