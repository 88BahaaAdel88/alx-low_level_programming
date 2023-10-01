#include "main.h"

/**
 * is_prime - checks if n is a prime number
 * @n: the tested number
 * @c: number given to test n
 * Return: recursion of is_prime till its over
 */

int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (is_prime(n, c + 1));
}

/**
 * is_prime_number - checks if n is a valid number
 * @n: number passed to the other function
 * Return: the prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
