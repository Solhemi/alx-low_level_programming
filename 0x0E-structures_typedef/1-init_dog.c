#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes fn. var
 * @d: pointer to initialize struct
 * @name: initialize name
 * @age: initialize age
 * @owner: initialize owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
