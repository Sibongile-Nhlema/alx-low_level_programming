#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stype.h>

/** _zero - decides if number is zero
 * @argv: argument
 * Return: nothing
 */

void _zero(char *argv[])
{
	int i, n0 = 1, n1 = 1;

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != '0')
		{
			n0 = 0;
			break;
		}
	}
	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] != '0')
		{
			n1 = 0;
			break;
		}
	}
	if (n0 == 1 || n1 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _start_array - sets function to 0
 * @array: array in char
 * @len: length of array
 */

char *_start_array(char *array, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
	{
		array[i] = '0';
	}
	array[len] = '\0';
	return (array);
}


