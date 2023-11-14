#include "dog.h"
#include <stdio.h>

/**
 * print_dog - affiche une structure
 * @d: pointeur vers la structure dog
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
/**
 * printf("Name: %s\n", d->name ? d->name : "(nil)");
 *  est un ternaire égal à ce code :
 *
 * if (d->name != NULL)
 *	printf("Name: %s\n", d->name);
 * else
 *	printf("Name: (nil)\n");
 */
