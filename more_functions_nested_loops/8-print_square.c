#include "main.h"

/**
 * print_square - prints a square n times.
 * @size: the number of times the # should be printed
 *
 * Return: void
 */

void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
     _putchar('\n');
	}
	 _putchar('\n');
}
