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
/**
 * is_palindrome - checks if string is palindrome
 * @s: the string
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_str(s, 0, strlen_recursion(s) - 1));
}
