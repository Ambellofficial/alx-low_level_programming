#include "main.h"
/**
 * strlen_recursion - to get string length
 * @s: the string
 * Return: length of string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(s + 1));
}
/**
 * compare_str - compares character of string
 * @s: the string
 * @l: smallest iterator
 * @r: largest iterator
 * Return: int
 */
int compare_str(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + compare_str(s, l + 1, r - 1));
	}
	return (0);
}
