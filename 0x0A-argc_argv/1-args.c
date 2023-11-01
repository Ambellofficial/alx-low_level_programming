#include <stdio.h>
/**
 * main - prints a number
 * @argc: command line arguments
 * @argv: contains the command line argument
 * Return: (0)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
