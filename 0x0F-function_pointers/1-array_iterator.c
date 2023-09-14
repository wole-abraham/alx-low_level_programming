#include <stdlib.h>
/**
 * array_iterator - iterates ina an array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int n;

	if (action != NULL && array != NULL && array > 0)
		for (n = 0; n <  size; n++)
			action(array[n]);
}
