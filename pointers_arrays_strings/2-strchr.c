#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @s: the string to seach in
 * @c: the character to found
 * 
 *
 * Return: pointer to the fist occurrence of the character or NULL if not found
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
  if (s[i] == c)
    s=s[i];
  return (s);
i++;
}
  if (s[i] == '\0')
    return(NULL);



}
