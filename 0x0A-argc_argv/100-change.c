#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coin
 * @argc: command line argument
 * @argv: contains the command line arg
 * Return: (0) success
 */
int main(int argc, char **argv)
{
	int cent, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		if (cent >= 10)
			cent -= 10;
		if (cent >= 5)
			cents -= 5;
		if (cent >= 2)
			cent -= 2;
		if (cent >= 1)
			cent -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
