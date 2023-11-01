#include <stdio.h>
/**
 * main - prints name followed by a new line
 * @argc: number of command line argument
 * @argv: contains the command line arg
 * Return: (0) success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
