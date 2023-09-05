#include <stdlib.h>
#include "main.h"
/**
 * create_array - main Entry
 * @size: number of bytes
 * @c: constant char to be filed
 * Description: ^^^^^^^^^^^^^
 * Return: ar or NUll
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *ar;


	ar = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (ar == NULL)
	{
		return (NULL);
	}

	i = 0;

	for (; i < size; i++)
		ar[i] = c;

	ar[i] = '\0';

	return (ar);
}
