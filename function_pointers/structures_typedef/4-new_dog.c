#include <stdlib.h>
#include "dog.h"

/**
* str_copy - duplicates a string manually
* @str: string to duplicate
*
* Return: pointer to the duplicated string, or NULL on failure
*/
char *str_copy(char *str)
{
char *copy;
unsigned int len = 0, i;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

copy = malloc(len + 1);
if (copy == NULL)
return (NULL);

for (i = 0; i <= len; i++)
copy[i] = str[i];

return (copy);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the newly created dog, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

d->name = str_copy(name);
d->owner = str_copy(owner);

if ((name != NULL && d->name == NULL) || (owner != NULL && d->owner == NULL))
{
free(d->name);
free(d->owner);
free(d);
return (NULL);
}

d->age = age;

return (d);
}
