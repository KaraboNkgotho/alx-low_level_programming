#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{
	int counter = 0;
	int i = 0;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)

		return (NULL);

	for (counter = 0; str[counter]; counter++)

		c[counter] = str[counter];

	return (c);

}
