#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i;
int mul=1;
if (argc == 0)
printf("Error");
else
for (i = 1 ; i < 3 ; i++)
mul = mul * atoi(argv[i]);

printf("%i\n", mul);
return (0);
}
