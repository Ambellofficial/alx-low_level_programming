#include "main.h"
/**
 * main - prints alphabets
 * Return: (0) success
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

	return (0);
}
