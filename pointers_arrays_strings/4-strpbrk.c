#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  locates the first occurrence in the string s
 * @s: string to check
 * @accept: allowed characters
 *
 * Return: pointer to the first charcter that matches one of in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}

		i++;
	}

	return (NULL);
}
