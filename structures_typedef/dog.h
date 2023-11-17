#ifndef dog_h
#define dog_h

/**
 * struct dog - chien ?
 * @name: nom du chien
 * @age: age du chien
 * @owner: propriétaire du chien
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
