#include "main.h"

/**
 * free_dog - frees your doggies
 * @d: your doggo
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
