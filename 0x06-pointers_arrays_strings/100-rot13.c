#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes rot13
 * @s: pointer to string
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char dat1[] = "ABCDEFGHIJKLMNOPQRSTWXYZabcdefghijklmnopqrstuvwxyz";
	char datrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == dat1[j])
			{
				s[i] = datrot[j];
				break;
			}
		}
	}
	return (s);
}
