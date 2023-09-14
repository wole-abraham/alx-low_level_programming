#include <stdlib.h>
/**
 * int_index - Entry poiny
 * @array: array
 * @size: size
 * @cmp: pointer to funvyio
 * Return: -1 or
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);

		}
	}


	return (-1);


}


