#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned  int ni = 0;
	int mi = 1;
	int is = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			mi *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			is = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (is == 1)
		{
			break;
		}
		c++;
	}
	ni *= mi;
	return (ni);
}
