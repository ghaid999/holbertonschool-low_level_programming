#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length 
 * @sum : contain the length
 */

int _strlen_recursion(char *s)
{
int sum;
	if (*s == '\0')
		return(0);

	 sum = sum++ +  _print_rev_recursion(s + 1);
	return sum;
	
}
