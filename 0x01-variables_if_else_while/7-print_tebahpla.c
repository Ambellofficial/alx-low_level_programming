#include <stdio.h>
/**
 * main - prints output using putchar
 * Return: (0)
 * success
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
