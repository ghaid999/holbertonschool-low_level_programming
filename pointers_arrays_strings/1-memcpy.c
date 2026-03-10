#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte used to fill the memory
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest [i] = *src;
}

return (dest);
}
