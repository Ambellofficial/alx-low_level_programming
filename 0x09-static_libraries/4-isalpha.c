#include "main.h"
/**
 * _isalpha - return 1 when c is upper, lower or alphabet
 *
 * Description: uses _putchar
 *
 * @c: collects character
 *
 * Return: (1) if c is low or cap else (0) success
 */
int _isalpha(int c)
{
	char low, up;
	int letter = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (low == c || up == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
