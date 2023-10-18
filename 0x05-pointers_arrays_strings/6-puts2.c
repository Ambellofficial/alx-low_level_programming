#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: The string
 * Return: (0) success
 */
void put2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
