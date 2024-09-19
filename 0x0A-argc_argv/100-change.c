#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of coins to make change
 * make change
 * @argc: no of args
 * @argv: array
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])

{

	int counter, no, tot;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)

	{

		printf("Error\n");

		return (1);

	}

	no = atoi(argv[1]);

	tot = 0;

	if (no < 0)

	{

		printf("0\n");
		return (0);

	}

	for (counter = 0; counter < 5 && no >= 0; counter++)

		{
		while (no >= coins[counter])
		{
		tot++;
		no -= coins[counter];
		}
	}

	printf("%d\n", tot);
	return (0);
}
