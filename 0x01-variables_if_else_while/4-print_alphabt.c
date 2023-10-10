#include <stdio.h>
/**
 * main - prints letters wthout q and e
 * Return: (0) success
 */
int main(void)
{
	int alpa = 'a';

	while (alpa <= 'z')
	{
		if (alpa != 'e' && alpa != 'q')
		{
			putchar(alpa);
		}
			alpa++;
		}
		putchar('\n');
		return (0);
}
