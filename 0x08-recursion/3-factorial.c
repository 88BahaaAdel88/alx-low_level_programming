#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the chosen number
 * Return: -1, 1 when the n is less or equal to 1 and the factorial if not
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
