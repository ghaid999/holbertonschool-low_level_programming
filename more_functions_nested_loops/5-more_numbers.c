#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
  int i;

  for (i = 1; i <= 10; i++)
    {
	int c;

	for (c = 0; c <= 14; c++)
		_putchar(c + '0');
	_putchar('\n');
    }
}
