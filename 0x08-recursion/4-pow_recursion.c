#include "main.h"
/**
 * _pow_recursion - returns a value
 * @x: a value
 * @y: also a value
 * Return: (0) success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
