#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * Return: (0) success
 */
int main(void)
{
	char alphas = 'a';

	while (alphas <= 'z')
	{
		putchar(alphas);
		alphas++;
	}
	putchar('\n');
	return (0);
}
