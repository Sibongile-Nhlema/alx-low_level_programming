#include "main.h"

int _strlen_recursion(char *s);
int check_if_palindrome(char *s, int start, int end);

/**
 * is_palindrome - prints palindrome
 * @s: string
 *
 * Return: returns 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_if_palindrome(s, 0, length - 1));
}

/**
 * check_if_palindrome - checks is it meet description
 * @s: string
 * @start: first index
 * @end: last index
 *
 * Return: 1 if true, 0 if not
 */

int check_if_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end]) /*base case*/
		return (0);
	else
		return (check_if_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /*base case. end char*/
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

}
