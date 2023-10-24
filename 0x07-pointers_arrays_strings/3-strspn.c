#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept : input
 * Return: (0) success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int o;

	while (*s)
	{
		for (o = 0; accept[o]; o++)
		{
			if (*s == accept[o])
			{
				n++;
				break;
			}
			else if (accept[o + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
