#include "main.h"
/**
 * _puts - prints a string
 * @str: the string
 * Return: (0) success
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
