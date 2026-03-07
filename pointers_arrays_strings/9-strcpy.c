#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: pointer to the destination
 * @src: pointer to the source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
