#include "main.h"
/**
 * create_array - creates an array of chars, and initalizes it
 * @size: size of the array
 * @c: the chars
 * Return: the size of chars
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
