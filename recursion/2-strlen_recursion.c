#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length 
 * @sum : contain the length
 */

int _strlen_recursion(char *s)
{
int sum = 0;
	if (*s == '\0')
		return(0);

	return sum = sum++ +  _print_rev_recursion(s + 1);
	
}
