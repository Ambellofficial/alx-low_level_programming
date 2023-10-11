#include <stdio.h>
/**
 * main - prints the output with putchar
 * Return: (0) success
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i <= 99; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = i; j <= 99; j++)
		{
			c = j / 10;
			d = j % 10;

			if (i != j)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
