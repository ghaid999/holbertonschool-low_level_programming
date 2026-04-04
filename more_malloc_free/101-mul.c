#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* is_digit_str - checks if a string contains only digits
* @s: string to check
*
* Return: 1 if all digits, 0 otherwise
*/
int is_digit_str(char *s)
{
int i;
if (s == NULL || s[0] == '\0')
return 0;
for (i = 0; s[i]; i++)
if (s[i] < '0' || s[i] > '9')
return 0;
return 1;
}

/**
* multiply - multiplies two positive number strings
* @num1: first number as string
* @num2: second number as string
*
* Return: pointer to the result string, or NULL on failure
*/
char *multiply(char *num1, char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int len_res = len1 + len2;
int *res = calloc(len_res, sizeof(int));
char *result_str;
int i, j, carry, sum, pos = 0;

if (!res)
return NULL;

/* multiply digits */
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
sum = (num1[i] - '0') * (num2[j] - '0') + res[i + j + 1] + carry;
carry = sum / 10;
res[i + j + 1] = sum % 10;
}
res[i + j] += carry;
}

/* skip leading zeros */
i = 0;
while (i < len_res && res[i] == 0)
i++;
if (i == len_res) /* result is zero */
{
free(res);
result_str = malloc(2);
if (!result_str) return NULL;
result_str[0] = '0';
result_str[1] = '\0';
return result_str;
}

/* convert to string */
result_str = malloc(len_res - i + 1);
if (!result_str) { free(res); return NULL; }
while (i < len_res)
result_str[pos++] = res[i++] + '0';
result_str[pos] = '\0';
free(res);
return result_str;
}

/**
* main - multiplies two positive numbers passed as arguments
* @argc: number of arguments
* @argv: argument vector
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
char *num1, *num2, *res;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

num1 = argv[1];
num2 = argv[2];

if (!is_digit_str(num1) || !is_digit_str(num2))
{
printf("Error\n");
exit(98);
}

res = multiply(num1, num2);
if (!res)
{
printf("Error\n");
exit(98);
}

printf("%s\n", res);
free(res); /* free the result to prevent memory leak */
return 0;
}
