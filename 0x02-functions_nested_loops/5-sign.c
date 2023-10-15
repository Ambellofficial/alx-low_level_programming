#include "main.h"
/**
 * print_sign - prints the sign of number
 * @n: number checked
 * Description: prints with condition
 * Return: (1), (-1) or (0) depending
 */
int print_sign(int n)
{
	int neg = -1;
	char c = (char) neg;
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (c);
	}
}
