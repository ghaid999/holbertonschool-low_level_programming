#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* is_digit - checks if string contains only digits
*/
int is_digit(char *s)
{
int i;
for (i = 0; s[i]; i++)
if (s[i] < '0' || s[i] > '9')
return (0);
return (1);
}

/**
* main - multiplies two numbers
*/
int main(int argc, char *argv[])
{
char *n1, *n2;
int len1, len2, i, j, carry, sum;
int *res;
int start = 0;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
exit(98);
}

n1 = argv[1];
n2 = argv[2];
len1 = strlen(n1);
len2 = strlen(n2);

res = calloc(len1 + len2, sizeof(int));
if (!res)
exit(98);

/* multiplication */
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
sum = (n1[i] - '0') * (n2[j] - '0') + res[i + j + 1] + carry;
res[i + j + 1] = sum % 10;
carry = sum / 10;
}
res[i + j + 1] += carry; 
}

/* skip leading zeros */
while (start < len1 + len2 - 1 && res[start] == 0)
start++;

/* print result */
for (i = start; i < len1 + len2; i++)
printf("%d", res[i]);
printf("\n");

free(res);
return (0);
}
