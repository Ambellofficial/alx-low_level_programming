#include "main.h"
/**
 * is_prime - finds the prime
 * @a: an input
 * @b: a divisor
 * Return: (0) success
 */
int is_prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (is_prime(a, b + 1));
}
/**
 * is_prime_number - checks if it is prime number
 * @n: input number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
