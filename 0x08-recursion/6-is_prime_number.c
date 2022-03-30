#include "main.h"

/**
 * prime_checker - checks for prime
 * @n: input to check
 * @i: n / 2, then passes to i - 1, checks if greater than 0
 * Return: prime check
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

/**
 * is_prime_number - find if a number is a prime number
 *
 * @n: n to determine if is prime
 *
 * Return: 1,<F7> if @n is prime
 * else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}
