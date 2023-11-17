#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
		return (NULL);

	dog2->name = strdup(name);

	if(dog2->name == NULL)
		return (NULL);

	dog2->age = age;

	dog2->owner = strdup(owner);

	if(dog2->owner == NULL)
		return (NULL);

	return (dog2);

}
