#include "main.h"

/**
 * check_sqrt - checks for the natural square root
 * @n: number
 * @i: current number
 *
 * Return: square root or -1
 */

int check_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (check_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 *
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_sqrt(n, 1));
}
