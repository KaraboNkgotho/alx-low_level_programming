#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns pointer to a 2 dimensional array of int
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL
 */

int **alloc_grid(int width, int height)

{
	int **c;
	int count;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)

		return (NULL);

	for (count = 0; count < height; count++)
	{
		c[count] = malloc(sizeof(int) * width);

		if (c[count] == NULL)
		{

			for (; count >= 0; count--)

			free(c[count]);

			free(c);
			return (NULL);
		}
	}

	for (count = 0; count < height; count++)
	{
		for (i = 0; i < width; i++)
			c[count][i] = 0;
	}
	return (c);
}
