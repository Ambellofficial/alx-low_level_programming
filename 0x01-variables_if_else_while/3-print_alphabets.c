#include <stdio.h>
/**
 * main - prints in lower then upper case
 * Return: (0) success
 */
int main(void)
{
	int alphas = 'a';
	int aLPHAS = 'A';

	while (alphas <= 'z')
	{
		putchar(alphas);
		alphas++;
	}
	while (aLPHAS <= 'Z')
	{
		putchar(aLPHAS);
		aLPHAS++;
	}
	putchar('\n');
	return (0);
}
