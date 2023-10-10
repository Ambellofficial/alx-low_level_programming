#include <stdio.h>
/**
 * main - prints output using putchar
 * Return: (0) success
 */
int main(void)
{
	int a = '0';
	int b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (b < 'g')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
