#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives
 * @argc: no of args
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])

{

	int counter;

	for (counter = 0; counter < argc; counter++)

	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
