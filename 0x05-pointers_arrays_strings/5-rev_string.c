#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: (0) success
 */
void rev_string(char *s)
{
	int lenght = 0, ind = 0;
	char tmp;

	while (s[ind++])
		lenght++;

	for (ind = lenght - 1; ind >= lreght / 2; ind--)
	{
		tmp = s[ind];
		s[ind] = s[lenght - ind - 1];
		s[lenght - ind - 1] = tmp;
	}
}
