#include "main.h"
#include <stdlib.h>
/**
 * freemem - frees the memory of an array of pointers
 * @d: pointer to first pointer in array
 */

void freemem(int **d)
{
	int i;

	for (i = 0; d[i] != NULL; i++)
	{
		free(d[i]);
	}
	free(d);
}

/**
 * alloc_grid - allocates space
 * @width: the length of each array
 * @height: the number of arrays
 * Return: Pointer to first element in array of pointers
 */

int **alloc_grid(int width, int height)
{
	int **dest;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	dest = malloc(sizeof(int *) * height);

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dest[i] = malloc(sizeof(int) * width);
		if (dest[i] == NULL)
		{
			freemem(dest);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			dest[i][j] = 0;
	}

	return (dest);
}
