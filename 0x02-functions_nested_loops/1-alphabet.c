#include "main.h"
/**
 * print_alphabet - prints alphabets
 * Return: (0) success
 */
void print_alphabet(void)
{
	char ab = 'a';

	while (ab <= 'z')
	{
		_putchar(ab);
		ab++;
	}
	_putchar('\n');
}
