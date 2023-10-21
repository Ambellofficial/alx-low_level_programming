#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @str: the string to be changed
 * Return: pointer to th changed string
 */
char *string_toupper(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		if (str[ind] >= 'a' && str[ind] <= 'z')
			str[ind] -= 32;
		ind++;
	}
	return (str);
}
