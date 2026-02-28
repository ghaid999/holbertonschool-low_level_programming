#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to process
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    /* Handle negative numbers */
    if (n < 0)
        n = -n;

    last_digit = n % 10;

    _putchar('0' + last_digit);

    return (last_digit);
}
