#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return:(0) success
 */
void print_alphabet_x10(void)
{
	char a;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
