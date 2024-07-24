#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: Pointer to a structure
 * @name: The dogs name
 * @age: The dogs age
 * @owner: The dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
