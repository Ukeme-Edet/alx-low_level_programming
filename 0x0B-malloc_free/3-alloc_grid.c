#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a two dimensional array of integers
 * @width: The width of the grid to be created
 * @height: The height if the grid to be created
 * Return: A pointer to the grid if successful, else NULL
 */
int **alloc_grid(int width, int height)
{
	int **g = (int **)malloc(height * sizeof(int *));
	int i, j, *r;

	if (width < 1 || height < 1)
		return (NULL);
	for (i = 0; g && i < height; i++)
	{
		r = (int *)malloc(width * sizeof(int));
		if (!r)
		{
			while (i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
		for (j = 0; r && j < width; j++)
			r[j] = 0;
		g[i] = r;
	}
	return (g ? g : NULL);
}
