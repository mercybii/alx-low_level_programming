#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a var of type struct dog
 * @d: pointer to struct dog initialize
 * @name: name initialize
 * @age: age initialize
 * @owner: owner initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
