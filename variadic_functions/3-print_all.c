#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on format
 * @format: list of types
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", sep, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", sep, va_arg(args, double));
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
		}
		else
		{
			i++;
			continue;
		}

		sep = ", ";
		i++;
	}

	printf("\n");

	va_end(args);
}
