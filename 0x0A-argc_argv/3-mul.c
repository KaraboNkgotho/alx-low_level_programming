#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)

{

	int counter = 0;

	int x = 0;

	int y = 0;

	int z = 0;

	int count = 0;

	int value = 0;

	while (s[count] != '\0')

		count++;

	while (counter < count && z == 0)

	{
		if (s[counter] == '-')
			++x;
		if (s[counter] >= '0' && s[counter] <= '9')

		{
			value = s[counter] - '0';

			if (x % 2)
				value = -value;
			y = y * 10 + value;
			z = 1;
			if (s[counter + 1] < '0' || s[counter + 1] > '9')
				break;
			z = 0;
		}
		counter++;
	}
	if (z == 0)
	return (0);
	return (y);
}

/**
 * main - a program that multiplies two numbers
 * @argc: no of args
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])

{

	int no1, no2, total;

	if (argc < 3 || argc > 3)

	}

		printf("Error\n");

		return (1);

	}


	no1 = _atoi(argv[1]);

	no2 = _atoi(argv[2]);

	total = no1 * no2;

	printf("%d\n", total);

	return (0);

}
