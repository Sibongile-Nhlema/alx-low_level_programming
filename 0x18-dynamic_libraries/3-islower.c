#include "main.h"
/**
 * _islower- checks for lowercase char
 * @c: char in question
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);

}