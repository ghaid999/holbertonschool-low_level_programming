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
char *name_copy, *owner_copy;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

name_copy = (name != NULL) ? strdup(name) : NULL;
owner_copy = (owner != NULL) ? strdup(owner) : NULL;

if ((name != NULL && name_copy == NULL) || (owner != NULL && owner_copy == NULL))
{
free(name_copy);
free(owner_copy);
free(d);
return (NULL);
}

d->name = name_copy;
d->age = age;
d->owner = owner_copy;

return (d);
}
