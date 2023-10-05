#include "main.h"
/**
 * _strdup - takes a string ptr as an argument and returns a char ptr
 * @str: str string the user input
 * Return: the copied string
 */

#include <stdio.h>
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;

	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
