#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array
 * @size: Size of array
 * @c: Character
 * Return: Pointer to the first character in the created array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
