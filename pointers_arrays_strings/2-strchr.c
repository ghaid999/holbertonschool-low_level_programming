#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of a character
 * @s: string to search in
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	if (c == '\0')
		return (&s[i]);

	return (NULL);
}
