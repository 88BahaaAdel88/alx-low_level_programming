#include "function_pointers.h"
/**
 * array_iterator - iterat throw a function pointer
 * @array: the array integer
 * @size: the array size
 * @action: func ptr
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
