#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - créé un nouveau chien
 * @name: nom du chien
 * @age: son age
 * @owner: son proprio
 *
 * Return: NULL ou dog2
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
		return (NULL);

	dog2->name = strdup(name);

	if (name == NULL)
		return (NULL);

	dog2->owner = strdup(owner);

	if (owner == NULL)
		return (NULL);

	dog2->age = age;

	return (dog2);

}
