#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct that creats dog info
 *
 * @name: the dogs name
 * @age: The dogs age
 * @owner: The dogs owner
 * Desc: My first ALX struct
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
