#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of the program
* @ac: argument count
* @av: argument vector
*
* Return: pointer to the new string, or NULL on failure
*/
char *argstostr(int ac, char **av)
{
int i, j, total_len = 0, pos = 0;
char *result;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
if (av[i] != NULL)
{
for (j = 0; av[i][j] != '\0'; j++)
total_len++;
}
total_len++;
}
result = malloc(total_len + 1);
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
if (av[i] != NULL)
{
for (j = 0; av[i][j] != '\0'; j++)
{
result[pos] = av[i][j];
pos++;
}
}
result[pos] = '\n';
pos++;
}
result[pos] = '\0';
return (result);
}
