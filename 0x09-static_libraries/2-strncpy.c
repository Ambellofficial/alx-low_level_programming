#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the bufferthat stores the string
 * @src: The source
 * @n: the maximum number of bytes to be copied from src
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ind = 0, src_len = 0;

	while (src[ind++])
		src_len++;

	for (ind = 0; src[ind] && ind < n; ind++)
		dest[ind] = src[ind];

	for (ind = src_len; ind < n; ind++)
		dest[ind] = '\0';

	return (dest);
}
