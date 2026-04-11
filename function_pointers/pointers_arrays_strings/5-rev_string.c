#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	len--; /* move to the last character */

	/* swap */
	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;

		i++;
		len--;
	}
}
