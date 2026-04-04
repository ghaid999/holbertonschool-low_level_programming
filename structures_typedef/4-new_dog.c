#include <stdlib.h>
#include <string.h>
#include "dog.h"

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
char *name_copy = NULL;
char *owner_copy = NULL;
size_t len;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

/* copy name */
if (name != NULL)
{
len = 0;
while (name[len] != '\0')
len++;
name_copy = malloc(len + 1);
if (name_copy == NULL)
{
free(d);
return (NULL);
}
for (size_t i = 0; i <= len; i++)
name_copy[i] = name[i];
}

/* copy owner */
if (owner != NULL)
{
len = 0;
while (owner[len] != '\0')
len++;
owner_copy = malloc(len + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(d);
return (NULL);
}
for (size_t i = 0; i <= len; i++)
owner_copy[i] = owner[i];
}

/* assign values */
d->name = name_copy;
d->age = age;
d->owner = owner_copy;

return (d);
}
