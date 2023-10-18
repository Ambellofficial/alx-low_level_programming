#include "main.h"
/**
 * print_rev - prints the sting in reverse mode
 * @s: the string
 * Return: (0) success
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
