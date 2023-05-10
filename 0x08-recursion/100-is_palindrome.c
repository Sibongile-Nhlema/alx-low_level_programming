#include "main.h"

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length
 * @s: String
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		 return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string
 * @i: iterator
 * @length: length of string
 */

int check_palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	if (i >= length)
	{
		return (1);
	}
	return (check_palindrome(s, i + 1, length - 1));
}
