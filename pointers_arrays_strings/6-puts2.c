#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int max = 1000; /* safety limit to prevent reading past memory */

	while (str[i] != '\0' && i < max)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
