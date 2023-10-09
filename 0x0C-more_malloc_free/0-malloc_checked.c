#include "main.h"
/**
 * *malloc_checked - returns a ptr to the allocated memory
 * @b: usr enter
 * Return: the size assigned by malloc
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
