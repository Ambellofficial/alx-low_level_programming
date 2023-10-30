#include "main.h"
/**
 * _strpbrk - searches string for for any of a set of bytes
 * @s: the string
 * @accept: input
 * Return: (0) success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
