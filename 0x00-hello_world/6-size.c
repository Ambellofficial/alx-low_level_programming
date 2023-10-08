#include <stdio.h>
/**
 * main - prints sizes of various types
 * Return: (0) success
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	float d;

	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s) \n", sizeof(a));
	printf("Size of a long int: %lu byte(s) \n", sizeof(b));
	printf("Size of a long long int: %lu byte(s) \n", sizeof(c));
	printf("Size of a float: %lu byte(s) \n", sizeof(d));

	return (0);
}
