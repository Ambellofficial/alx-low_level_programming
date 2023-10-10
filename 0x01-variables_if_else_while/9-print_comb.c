#include <stdio.h>
/**
 * main - prints the output with putchar
 * Return: (0) success
 */
int main(void)
{
	int p = '0';

	while (p <= '9')
	{
		putchar(p);
		if (p <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		p++;
	}
	putchar('\n');
	return (0);
}
