#include "main.h"
/**
 * square - calculates the root square of a value
 * @n: the value we want to get its root
 * @val: the final root we get
 * Return: the val
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the square function
 * @n: the number we want to get its root
 * Return: the squre
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
