#include "main.h"
/**
 * _isalpha- checks for alphabetic char
 * @c - the char
 * Return: 1 is upper/ lowercase, 0 is otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
