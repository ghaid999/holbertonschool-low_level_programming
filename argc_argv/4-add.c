#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

for (i = 1 ; i < argc ; i++)
{
if (isalpha(argv[i]))
{
printf("Error\n");
return (1);
}
	
sum = sum + atoi(argv[i]);

}
printf("%d\n", sum);

return (0);
}
