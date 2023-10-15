#include "main.h"
/**
 * _islower - detects the lower and upper case
 * Description: prints with _putchar
 * @c: collects alphabet
 * Return: (1) if c is lower else (0) success
 */
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			low = 1;
		}
	}
	return (low);
}
