#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: string dog name
 * @name: string dog name
 * @age: string dog age
 * @owner: string dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
