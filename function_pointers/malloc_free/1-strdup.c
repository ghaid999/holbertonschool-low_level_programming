#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
char *copy;
int i, len = 0;

if (str == NULL)
return (NULL);


while (str[len] != '\0')
len++;


copy = (char *)malloc((len + 1) * sizeof(char));
if (copy == NULL)
return (NULL);


for (i = 0; i < len; i++)
copy [i] = str[i];

copy[len] = '\0';

return (copy);
}
