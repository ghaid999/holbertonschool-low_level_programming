#include <stdlib.h>
/**
* strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of words, or NULL on failure
*/
char **strtow(char *str)
{
int i, j, k, word_count = 0, word_len;
char **words;
if (str == NULL || str[0] == '\0')
return (NULL);
/* count words */
for (i = 0; str[i]; i++)
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
word_count++;
if (word_count == 0)
return (NULL);
/* allocate array for word_count + 1 (NULL at end) */
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
k = 0;
i = 0;
while (str[i] && k < word_count)
{
while (str[i] == ' ')
i++;
word_len = 0;
while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
word_len++;
words[k] = malloc(word_len + 1);
if (words[k] == NULL)
{
while (k-- > 0)
free(words[k]);
free(words);
return (NULL);
}
for (j = 0; j < word_len; j++)
words[k][j] = str[i + j];
words[k][word_len] = '\0';
i += word_len;
k++;
}
words[k] = NULL;
return (words);
}
