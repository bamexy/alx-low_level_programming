#include "main.h"

/**
 * prime_number - input integer is a prime number
 * @p: prime number
 * @f: factor check
 * Return: 1 if prime
 */
int prime_number(int p, int f)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_number(f + 1, p));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_number(2, n));
}
