#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a va riable of the ty struct dog
 * @d: pointer to the struct to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: ownesr to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
