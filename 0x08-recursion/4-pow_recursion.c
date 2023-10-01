#include "main.h"

/**
 * _pow_recursion - returns the power of x raised to y
 * @x: the number
 * @y: the power used
 * Return: -1 if y less than 0, 1 if y is equal to 0 and the power else
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
