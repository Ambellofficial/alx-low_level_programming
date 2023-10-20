#include "main.h"

/**
 * _strncat - concacenates two strings
 * @dest: The string appended upon
 * @src: The string to be appended
 * @n: the number of bytes to be appended from src
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int ind = 0, dest_len = 0;

	while (dest[ind++])
		dest_len++;
	for (index = 0; src[ind] && ind < n; ind++)
		dest[dest_len++] = src[ind];
	return (dest);
}
