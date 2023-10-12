#include "main.h"

/**
 * init_dog - starts a dog init
 * @d: the doggo
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
