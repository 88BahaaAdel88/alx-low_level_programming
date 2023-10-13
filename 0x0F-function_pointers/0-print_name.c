#include "function_pointers.h"

/**
 * print_name - prints out a name
 * @name: the strings name
 * @f: the function ptr to print
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
