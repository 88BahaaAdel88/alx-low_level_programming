#include "main.h"

int is_prime(int n , int c)
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

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
