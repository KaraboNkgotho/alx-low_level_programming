#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @str1: input str1
 * @str2: input str2
 * Return: str
 */

char *str_concat(char *str1, char *str2)

{
	char *c;
	int x, y;

	if (str1 == NULL)
		str1 = "";

		if (str2 == NULL)
			str2 = "";

		x = y = 0;
			while (str1[x] != '\0')
				x++;

			while (str2[y] != '\0')
				y++;

			c = malloc(sizeof(char) * (x + y + 1));

	if (c == NULL)
		return (NULL);

	x = y = 0;

	while (str1[x] != '\0')
	{
		c[x] = str1[x];
		x++;
	}

	while (str2[y] != '\0')
	{
		c[x] = str2[y];
		x++, y++;
	}
	c[x] = '\0';
	return (c);
}
