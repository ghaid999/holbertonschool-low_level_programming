#include <stdio.h>

/**
 * main - prints prints the number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i;
int sum=0;
  for(i=0 ; i < argc ; i++)
    sum++;

	printf("%i\n", sum);
	return (0);
}
