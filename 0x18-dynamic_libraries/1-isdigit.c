#include "main.h"
/**
 *_isdigit- checks if  parameter is a digit between 0 to 9
 * @c: digit
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
