#include <stdio.h>
#include "main.h"
/**
 * int _islower- checks for lowercase char
 *c: char in question
 * Returns: 1 if lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >+ 'a' && c <= 'z')
	{
		return (1);
	}
	else {
		return (0);
	}


}
