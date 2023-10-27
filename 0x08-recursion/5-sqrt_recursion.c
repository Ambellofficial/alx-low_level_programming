#include "main.h"
/**
 * _sqrt_rec - returns the natural
 * square root of a number
 * @a: input number
 * @b: iterator
 * Return: result of the square root
 */
int _sqrt_rec(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_rec(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: the input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_rec(n, 0));
}
